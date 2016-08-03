INSTRUCTIONS

Install the WCF samples: Windows Communication Foundation (WCF) and Windows
Workflow Foundation (WF) Samples for .NET Framework 4.

You should have:

  C:\WF_WCF_Samples\WCF\Basic\Binding\Basic\TransportSecurity\CS

Open the Basic TransportSecurity WCF C# example client and service project in
Visual Studio. Modify the configuration and source code as described below.

Notes:

  C:> denotes the Windows command line

  $ denotes the Unix/Linux command line

To generate keys and certificates
---------------------------------

Convert PEM to cer format:

  $ make cacert.cer

Import cacert.cer by opening it on the Windows machine and then select Install
Certificate.

Change client.cs by removing the RemoveValidate(...) check to always return
true, or modify according to certificate properties to enforce.

To connect a WCF client to a gSOAP service
------------------------------------------

Import cacert.cer on the windows machine, see above.

In App.config set the endpoint to the gSOAP server endpoint, say "10.0.1.5"
over wifi:

<client>
  <endpoint address="https://10.0.1.5:8000" ... />

Run the gSOAP server on port 8000 and then the client.

  $ ./calculator 8000

  C:\WF_WCF_Samples\WCF\Basic\Binding\Basic\TransportSecurity\CS\client> bin\client.exe

To self-host a WCF service
--------------------------

Obtain the machine name or IP

  C:> ipconfig /all

say it is 10.0.1.5 over wifi.

Add a Main() to self-host, say the WCF samples CalculatorService class under

  C:\WF_WCF_Samples\WCF\Basic\Binding\Basic\TransportSecurity\CS\service

with the following class put in the namespace:

using System;
using System.ServiceModel;
using System.Configuration;
using System.ServiceModel.Description;

namespace ...
{
  ...
  public class Program
  {
    public static void Main()
    {
      Uri httpUrl = new Uri("https://10.0.1.5:8000/ServiceModelSamples/service");
      using (ServiceHost serviceHost = new ServiceHost(typeof(CalculatorService), httpUrl))
      {
        BasicHttpBinding bhb = new BasicHttpBinding();
        bhb.Security.Mode = BasicHttpSecurityMode.Transport;
        bhb.Security.Transport.ClientCredentialType = HttpClientCredentialType.None;
  
        serviceHost.AddServiceEndpoint(typeof(ICalculator), bhb, "");
  
        ServiceMetadataBehavior smb = new ServiceMetadataBehavior();
        smb.HttpGetEnabled = true;
        serviceHost.Description.Behaviors.Add(smb);
  
        serviceHost.Open();

        Console.WriteLine("Press <ENTER> to terminate service.");
        Console.ReadLine();
      }
    }
  }
}

Under Project Properties change the Output type to Console Application to
generate a service.exe.

Compile and run the WCF service:

  C:\WF_WCF_Samples\WCF\Basic\Binding\Basic\TransportSecurity\CS\service> bin\service.exe

Use a web browser to access the service at
  https://10.0.1.5:8000/ServiceModelSamples/service
and access the WSDL at
  https://10.0.1.5:8000/ServiceModelSamples/service?wsdl

A gSOAP client connects to this https service, but only when the service
certificate is registered with the https port of the Windows machine.

To run wsdl2h to generate C++ code:

  $ wsdl2h -t ../../../../typemap.dat -o calculator.h 'http://10.0.1.5:8000/ServiceModelSamples/service?wsdl'

This may take some time, since the self-hosted service is an iterative web
server that allows only one open connection.

A pre-generated calculator.h file is included in the build directory.

