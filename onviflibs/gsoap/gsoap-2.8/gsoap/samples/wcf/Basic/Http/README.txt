INSTRUCTIONS

Install the WCF samples: Windows Communication Foundation (WCF) and Windows
Workflow Foundation (WF) Samples for .NET Framework 4.

You should have:

  C:\WF_WCF_Samples\WCF\Basic\Binding\Basic\Http\CS

Open the Basic Http WCF C# example client and service project in Visual
Studio. Modify the configuration and source code as described below.

Notes:

  C:> denotes the Windows command line

  $ denotes the Unix/Linux command line

To connect a WCF client to a gSOAP service
------------------------------------------

In App.config set the endpoint to the server endpoint, say "10.0.1.5" over
wifi:

<client>
  <endpoint address="http://10.0.1.5:8000" ... />

Run the gSOAP server on port 8000.

To self-host a WCF service
--------------------------

Obtain the machine name or IP

  C:> ipconfig /all

say it is 10.0.1.5 over wifi.

Add a Main() to self-host by adding a Program class in the WCF sample

  C:\WF_WCF_Samples\WCF\Basic\Binding\Basic\Http\CS\service

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
      Uri httpUrl = new Uri("http://10.0.1.5:8000/ServiceModelSamples/service");
      using (ServiceHost serviceHost = new ServiceHost(typeof(CalculatorService), httpUrl))
      {
        BasicHttpBinding bhb = new BasicHttpBinding();
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

Under Project Properties change the Output type to Console Application to
generate a service.exe.

Use a web browser to access the service at
  http://10.0.1.5:8000/ServiceModelSamples/service
and access the WSDL at
  http://10.0.1.5:8000/ServiceModelSamples/service?wsdl

To run wsdl2h to generate C++ code:

   $ wsdl2h -t ../../../../typemap.dat -o calculator.h 'http://10.0.1.5:8000/ServiceModelSamples/service?wsdl'

This may take some time, since the self-hosted service is an iterative web
server that allows only one open connection.

A pre-generated calculator.h file is included in the build directory.

