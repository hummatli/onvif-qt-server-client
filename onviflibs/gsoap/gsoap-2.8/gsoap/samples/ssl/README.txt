
SSL/TLS Client and Server Examples and Key Generation
=====================================================

Using OpenSSL
-------------

The SSL-enabled applications are compiled with -DWITH_OPENSSL -DWITH_GZIP and
linked with -lgsoapssl++ (or -lgsoapssl) -lssl -lcrypto -lz

OpenSSL multithreaded applications require mutex locks, see the
CRYPTO_thread_setup() and CRYPTO_thread_cleanup() code in the examples.

Using GNUTLS
------------

The SSL-enabled applications are compiled with -DWITH_GNUTLS -DWITH_GZIP and
linked with stdsoap2.c[pp] -lgnutls -lgcrypt -lz

Note that stdsoap2.c[pp] MUST be compiled with -DWITH_GNUTLS to use GNUTLS,
because libgsoapssl is built with OpenSSL by default.

Note: GNUTLS does not support encrypted PEM keyfiles, so you cannot use the key
files generated with OpenSSL and use them in a GNUTLS-enabled application.

GNUTLS mutex locks are automatically enabled by the gSOAP engine stdsoap2.c[pp]
when pthreads are detected.

How to create self-signed certificates with OpenSSL
---------------------------------------------------

How to generate self-signed root certificate and client.pem/server.pem with
certificates signed by the root CA for deployment in clients and servers.

Create a 'CA' directory and copy openssl.cnf, root.sh, and cert.sh to this
dir.

Change dir to 'CA'.

Modify the openssl.cnf file in the [req_distinguished_name] section for the
following items:

[ req_distinguished_name ]
countryName_default             = US
stateOrProvinceName_default     = Your-State
localityName_default            = Your-City
0.organizationName_default      = Your-Company-Name
emailAddress_default            = your-email@address

If you are going to use these settings often, add this line to your .cshrc:
setenv OPENSSL_CONF $HOME/CA/openssl.cnf

To generate the root CA:

./root.sh

When prompted, choose a passphrase to protect the CA's private key that you
are about to generate. You need the passphrase again when you sign
certificates with the CA's private key.

Save the root.pem key and the passphrase in a safe place (don't distribute!).

Now you got the root.pem with the CA's keys and the cacert.pem certificate of
the CA (for distribution).

The root.pem and cacert.pem are valid for three years. Don't repeat this step
until the certificate expires.

Next, we will generate the server.pem key file:

./cert.sh server

Enter a password when prompted and enter the host or simply "localhost" for
the domain of the server application. The password is used to lock the private
key of the server and will therefore be needed by your server application to
unlock the private key in the server.pem when needed for secure
communications. Use the root CA passphrase when prompted to sign the server
certificate.

When applicable, repeat the procedure for the client (use a fresh password and
select a host for the client application):

./cert.sh client

The client.pem and server.pem keys are valid for one year. Do not distribute
them (they include the private key, which is encrypted with the passwords
you selected which is not very secure). They are used ony locally by the SSL
application. Only distribute the CA certificate.

Required files in HOME/CA directory:

openssl.cnf
root.sh
cert.sh

Files generated:

cacert.pem      root's certificate for distribution, to verify authentication
root.pem        root CA (to sign client/server key files, do not distribute!)
rootkey.pem     private key (do not distribute!)
rootreq.pem     sign request
root.srl        serial number

client.pem      client key file with private key + cert (do not distribute)
clientkey.pem   private key (do not distribute)
clientreq.pem   sign request

server.pem      server key with private key and certificate (do not distribute)
serverkey.pem   private key (do not distribute)
serverreq.pem   sign request

To print the contents of a PEM file:

openssl x509 -text -in file.pem

How to convert certificates to CER format for MS Windows
--------------------------------------------------------

To convert certificate cacert.pem to CER format:

openssl x509 -in cacert.pem -outform der -out cacert.cer

Install the certificate on MS Windows by opening it and then select "Install
Certificate". Client applications running on MS Windows can now connect to the
server. The server authenticates to the client by means of the certificate.

How to create self-signed certificates with GNUTLS
--------------------------------------------------

We use the GNUTLS 'certtool' to create keys and certificates as follows.

First generate a private key (for a client or server):

> certtool --generate-privkey --outfile privkey.pem

Then we self-sign the certificate:

> certtool --generate-self-signed --load-privkey privkey.pem --outfile cert.pem

When prompted, the following options are recommended for the certificate:

* The certificate MUST NOT be marked as a CA certificate.
* The DNS name MUST match the FQDN that clients will use to access the server.
  Use the server domain name here. One name suffices.
* The certificate MUST be marked as usable for encryption.
* The certificate MUST be marked as usable for a TLS server (or client when
  appropriate).

The client.pem and server.pem keyfiles used in the soap_ssl_client_context()
and soap_ssl_server_context() API functions is a combination of the private key
and the certificate:

> cat privkey.pem cert.pem > server.pem

The client can use the cert.pem to authenticate the server. The private key
file and server.pem are for the server only and SHOULD NEVER be shared.

The PEM files produced by GNUTLS can be used with OpenSSL.

Note that the server.pem generated above is not encrypted with a password, so
the password parameter of soap_ssl_server_context() is not used. Neither is the
capath parameter used for the fact that GNUTLS does not search for loadable
certificates.

How to create a Certificate Authority and sign certificates with GNUTLS
-----------------------------------------------------------------------

We use GNUTLS 'certtool' to create a Certificate Authority (CA) to sign client
and server certificates as follows.

> certtool --generate-privkey --outfile cakey.pem

Then we self-sign the CA certificate:

> certtool --generate-self-signed --load-privkey cakey.pem --outfile cacert.pem

When prompted, the following options are recommended for the CA certificate:

* The CA certificate SHOULD be marked to belong to an authority.
* The CA certificate MUST be marked as a CA certificate.
* The CA certificate MUST be usable for signing other certificates.
* The CA certificate MUST be usable for signing Certificate Revocation Lists
  (CRLs).

Now we can create a server key and use the CA to sign the server's certificate:

> certtool --generate-privkey --outfile serverkey.pem

> certtool --generate-request --load-privkey serverkey.pem --outfile server.csr

> certtool --generate-certificate --load-request server.csr --load-ca-certificate cacert.pem --load-ca-privkey cakey.pem --outfile servercert.pem

Use the recommended options shown earlier for creating the certificate.

The client.pem and server.pem keyfiles used in the soap_ssl_client_context()
and soap_ssl_server_context() API functions is a combination of the private key
and the certificate:

> cat serverkey.pem servercert.pem > server.pem

The procedure above can be repeated to create a key and signed certificate for
clients and other servers. All clients and servers can be authenticated with
the CA certificate. The cacert.pem is to be used by all peers that require the
other party to authenticate (e.g. the client uses cacert.pem CA cert to
authenticate the server, who uses the server.pem keyfile).

Generating DH parameters with GNUTLS
------------------------------------

> certtool --generate-dh-params --bits 1024 --outfile dh.pem

