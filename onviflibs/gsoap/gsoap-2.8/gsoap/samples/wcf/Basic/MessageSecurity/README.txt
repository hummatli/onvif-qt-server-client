
INSTRUCTIONS

Install the WCF samples: Windows Communication Foundation (WCF) and Windows
Workflow Foundation (WF) Samples for .NET Framework 4.

You should have:

  C:\WF_WCF_Samples\WCF\Basic\Binding\Basic\MessageSecurity\CS

Open the Basic MessageSecurity WCF C# example client and service project in
Visual Studio. Modify the configuration and source code as described below.

Notes:

  C:> denotes the Windows command line

  $ denotes the Unix/Linux command line

To enable gSOAP to use WS-Security for BasicMessageSecurity interop, add to the
.h file to be processed by soapcpp2:

  #import "wsse.h"

See doc/wsse for instructions.

Generating keys and certificates
--------------------------------

First create the client key and certificate:

  C:> makecert -sk myKey -n "CN=client.com" -ss My -pe

Open the MMC console

  C:> mmc

Add the certificates snap-in to MMC if not already added, by pressing CTRL-M.

In Console Root/Certificates: select under Personal/Cerificates "client.com"

Export "client.com" by right-clicking, All Tasks/Export...

Export "client.com" as "client.pfx", make sure you export the private key.

Copy client.pfx to the other machine for conversion to PEM format.

To create a PEM-formatted private key:

  $ openssl pkcs12 -in client.pfx -nocerts -out clientWCF.pem
  $ openssl rsa -in clientWCF.pem -text -noout

To create a PEM-formatted certificate:

  $ openssl pkcs12 -in client.pfx -clcerts -nokeys -out clientcertWCF.pem
  $ openssl x509 -in clientcertWCF.pem -text -noout

Obtain the host name of the machine on which the service runs, say we use a
wifi address "10.0.1.5" for testing.

Repeat for the server key:

  C:> makecert -sk myKey -n "CN=10.0.1.5" -ss TrustedPeople -pe

Export certificate 10.0.1.5 under MMC Trusted People/Cerificates to pfx format
as described above, and convert the key and certificate to PEM format:

  $ openssl pkcs12 -in server.pfx -nocerts -out serverWCF.pem
  $ openssl rsa -in serverWCF.pem -text -noout

  $ openssl pkcs12 -in server.pfx -clcerts -nokeys -out servercertWCF.pem
  $ openssl x509 -in servercertWCF.pem -text -noout

To connect a WCF client to a gSOAP service
------------------------------------------

In App.config of the WCF client, change the <endpoint>, <message>, and
<defaultCertificate> elements:

  <client>
    <endpoint address="http://10.0.1.5:8000/ServiceModelSamples/service" ... />

  <bindings>
    <basicHttpBinding>
      <binding name="...">
        <security mode="Message">
          <message clientCredentialType="Certificate" algorithmSuite="Basic256Rsa15"/>

  <behaviors>
    <endpointBehaviors>
      <behavior name="...">
        <clientCredentials>
	   ...
	   <serviceCertificate>
	     <authentication certificateValidationMode="PeerOrChainTrust"/>
             <defaultCertificate findValue="10.0.1.5" storeLocation="CurrentUser" storeName="My" x509FindType="FindBySubjectName"/>

To connect a gSOAP client to a WCF service
------------------------------------------

Follow instructions to set up a WCF service using the keys and certificates,
where the server certificate should use the machine's host name or IP.

In Web.config (or App.config) of the service, change the <message> element:

  <bindings>
    <basicHttpBinding>
      <binding name="...">
        <security mode="Message">
          <message clientCredentialType="Certificate" algorithmSuite="Basic256Rsa15"/>

Supported algorthm suites
-------------------------

All Basic suites with Rsa15 for keywrap. The rsa-oaep-mgf1p keywrap algorithm
is currently not supported, but possibly will be supported in future releases.

