/*
	sslclient.c

	Example SSL-secure client.

	SSL-enabled services use the gSOAP SSL interface. See sslclient.c and
	sslserver.c for example code with instructions and the gSOAP
	documentation more details.

--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2001-2008, Robert van Engelen, Genivia, Inc. All Rights Reserved.
This software is released under one of the following two licenses:
GPL or Genivia's license for commercial use.
--------------------------------------------------------------------------------
GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org
--------------------------------------------------------------------------------
A commercial use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapH.h"
#include "ssl.nsmap"

#include <unistd.h>		/* defines _POSIX_THREADS if pthreads are available */
#if defined(_POSIX_THREADS) || defined(_SC_THREADS)
#include <pthread.h>
#endif

#include <signal.h>		/* defines SIGPIPE */

const char server[] = "https://localhost:18081";

int CRYPTO_thread_setup();
void CRYPTO_thread_cleanup();
void sigpipe_handle(int);

int main()
{ struct soap soap;
  double a, b, result;
  /* Init SSL */
  soap_ssl_init();
  if (CRYPTO_thread_setup())
  { fprintf(stderr, "Cannot setup thread mutex for OpenSSL\n");
    exit(1);
  }
  a = 10.0;
  b = 20.0;
  /* Init gSOAP context */
  soap_init(&soap);
  /* The supplied server certificate "server.pem" assumes that the server is
    running on 'localhost', so clients can only connect from the same host when
    verifying the server's certificate. Use SOAP_SSL_NO_AUTHENTICATION to omit
    the authentication of the server and use encryption directly from any site.
    To verify the certificates of third-party services, they must provide a
    certificate issued by Verisign or another trusted CA. At the client-side,
    the capath parameter should point to a directory that contains these
    trusted (root) certificates or the cafile parameter should refer to one
    file will all certificates. To help you out, the supplied "cacerts.pem"
    file contains the certificates issued by various CAs. You should use this
    file for the cafile parameter instead of "cacert.pem" to connect to trusted
    servers.  Note that the client may fail to connect if the server's
    credentials have problems (e.g. expired). Use SOAP_SSL_NO_AUTHENTICATION
    and set cacert to NULL to encrypt messages if you don't care about the
    trustworthyness of the server.
    Note 1: the password and capath are not used with GNUTLS
    Note 2: setting capath may not work on Windows.
  */
  if (soap_ssl_client_context(&soap,
    /* SOAP_SSL_NO_AUTHENTICATION, */ /* for encryption w/o authentication */
    /* SOAP_SSL_DEFAULT | SOAP_SSL_SKIP_HOST_CHECK, */	/* if we don't want the host name checks since these will change from machine to machine */
    SOAP_SSL_DEFAULT,	/* use SOAP_SSL_DEFAULT in production code */
    NULL, 		/* keyfile (cert+key): required only when client must authenticate to server (see SSL docs to create this file) */
    NULL, 		/* password to read the keyfile */
    "cacert.pem",	/* optional cacert file to store trusted certificates, use cacerts.pem for all public certificates issued by common CAs */
    NULL,		/* optional capath to directory with trusted certificates */
    NULL		/* if randfile!=NULL: use a file with random data to seed randomness */ 
  ))
  { soap_print_fault(&soap, stderr);
    exit(1);
  }
  soap.connect_timeout = 60;	/* try to connect for 1 minute */
  soap.send_timeout = soap.recv_timeout = 30;	/* if I/O stalls, then timeout after 30 seconds */
  if (soap_call_ns__add(&soap, server, "", a, b, &result) == SOAP_OK)
    fprintf(stdout, "Result: %f + %f = %f\n", a, b, result);
  else
    soap_print_fault(&soap, stderr);
  soap_destroy(&soap); /* C++ */
  soap_end(&soap);
  soap_done(&soap);
  CRYPTO_thread_cleanup();
  return 0;
}

/******************************************************************************\
 *
 *	OpenSSL
 *
\******************************************************************************/

#ifdef WITH_OPENSSL

#if defined(WIN32)
# define MUTEX_TYPE		HANDLE
# define MUTEX_SETUP(x)		(x) = CreateMutex(NULL, FALSE, NULL)
# define MUTEX_CLEANUP(x)	CloseHandle(x)
# define MUTEX_LOCK(x)		WaitForSingleObject((x), INFINITE)
# define MUTEX_UNLOCK(x)	ReleaseMutex(x)
# define THREAD_ID		GetCurrentThreadId()
#elif defined(_POSIX_THREADS) || defined(_SC_THREADS)
# define MUTEX_TYPE		pthread_mutex_t
# define MUTEX_SETUP(x)		pthread_mutex_init(&(x), NULL)
# define MUTEX_CLEANUP(x)	pthread_mutex_destroy(&(x))
# define MUTEX_LOCK(x)		pthread_mutex_lock(&(x))
# define MUTEX_UNLOCK(x)	pthread_mutex_unlock(&(x))
# define THREAD_ID		pthread_self()
#else
# error "You must define mutex operations appropriate for your platform"
# error	"See OpenSSL /threads/th-lock.c on how to implement mutex on your platform"
#endif

struct CRYPTO_dynlock_value
{ MUTEX_TYPE mutex;
};

static MUTEX_TYPE *mutex_buf;

static struct CRYPTO_dynlock_value *dyn_create_function(const char *file, int line)
{ struct CRYPTO_dynlock_value *value;
  value = (struct CRYPTO_dynlock_value*)malloc(sizeof(struct CRYPTO_dynlock_value));
  if (value)
    MUTEX_SETUP(value->mutex);
  return value;
}

static void dyn_lock_function(int mode, struct CRYPTO_dynlock_value *l, const char *file, int line)
{ if (mode & CRYPTO_LOCK)
    MUTEX_LOCK(l->mutex);
  else
    MUTEX_UNLOCK(l->mutex);
}

static void dyn_destroy_function(struct CRYPTO_dynlock_value *l, const char *file, int line)
{ MUTEX_CLEANUP(l->mutex);
  free(l);
}

void locking_function(int mode, int n, const char *file, int line)
{ if (mode & CRYPTO_LOCK)
    MUTEX_LOCK(mutex_buf[n]);
  else
    MUTEX_UNLOCK(mutex_buf[n]);
}

unsigned long id_function()
{ return (unsigned long)THREAD_ID;
}

int CRYPTO_thread_setup()
{ int i;
  mutex_buf = (MUTEX_TYPE*)malloc(CRYPTO_num_locks() * sizeof(pthread_mutex_t));
  if (!mutex_buf)
    return SOAP_EOM;
  for (i = 0; i < CRYPTO_num_locks(); i++)
    MUTEX_SETUP(mutex_buf[i]);
  CRYPTO_set_id_callback(id_function);
  CRYPTO_set_locking_callback(locking_function);
  CRYPTO_set_dynlock_create_callback(dyn_create_function);
  CRYPTO_set_dynlock_lock_callback(dyn_lock_function);
  CRYPTO_set_dynlock_destroy_callback(dyn_destroy_function);
  return SOAP_OK;
}

void CRYPTO_thread_cleanup()
{ int i;
  if (!mutex_buf)
    return;
  CRYPTO_set_id_callback(NULL);
  CRYPTO_set_locking_callback(NULL);
  CRYPTO_set_dynlock_create_callback(NULL);
  CRYPTO_set_dynlock_lock_callback(NULL);
  CRYPTO_set_dynlock_destroy_callback(NULL);
  for (i = 0; i < CRYPTO_num_locks(); i++)
    MUTEX_CLEANUP(mutex_buf[i]);
  free(mutex_buf);
  mutex_buf = NULL;
}

#else

/* OpenSSL not used, e.g. GNUTLS is used */

int CRYPTO_thread_setup()
{ return SOAP_OK;
}

void CRYPTO_thread_cleanup()
{ }

#endif

/******************************************************************************\
 *
 *	SIGPIPE
 *
\******************************************************************************/

void sigpipe_handle(int x) { }

