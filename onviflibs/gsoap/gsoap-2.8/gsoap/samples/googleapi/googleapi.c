/*
	googleapi.c
	
	Google Web API

	Compile and run from the command line:

	$ googleapi <key> [search|cached|spell] <arg>

	where <key> is the Google API license key (see
	http://www.google.com/apis)
	
	Example command-line invocation:
	
	$ googleapi XXXXXXXX search gSOAP

	Software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
	KIND, either express or implied.

	Copyright (C) 2002, Robert A. van Engelen, Florida State University.
*/

#include "soapH.h"
#include "googleapi.nsmap"

int main(int argc, char **argv)
{
  char *key, *dir, *arg;
  struct soap soap;

  soap_init2(&soap, SOAP_IO_DEFAULT, SOAP_XML_TREE);

  if (argc <= 3)
  {
    fprintf(stderr, "Usage: googleapi <key> search|cached|spell <arg>\n");
    return 0;
  }

  key = argv[1];
  dir = argv[2];
  arg = argv[3];

  if (!strcmp(dir, "search"))
  {
    struct api__doGoogleSearchResponse r;

    if (soap_call_api__doGoogleSearch(&soap, "http://api.google.com/search/beta2", "urn:GoogleSearchAction", key, arg, 0, 10, true_, "", false_, "", "latin1", "latin1", &r))
    {
      soap_print_fault(&soap, stderr);
      exit(1);
    }
    else
    {
      int i;

      printf("documentFiltering          = %d\n", (int)r._return.documentFiltering);
      printf("searchQuery                = %s\n", r._return.searchQuery?r._return.searchQuery:"<NONE>");
      printf("searchComments             = %s\n", r._return.searchComments?r._return.searchComments:"<NONE>");
      printf("searchTips                 = %s\n", r._return.searchTips);
      printf("searchTime                 = %f\n", r._return.searchTime);
      printf("estimatedTotalResultsCount = %d\n", r._return.estimatedTotalResultsCount);
      printf("estimateIsExact            = %d\n", (int)r._return.estimateIsExact);
      printf("startIndex                 = %d\n", r._return.startIndex);
      printf("endIndex                   = %d\n", r._return.endIndex);
      printf("resultElements             = \n");
      for (i = 0; i < r._return.resultElements.__size; i++)
      {
        const char *s1 = r._return.resultElements.__ptr[i].summary;
        const char *s2 = r._return.resultElements.__ptr[i].URL;
        const char *s3 = r._return.resultElements.__ptr[i].snippet;
        const char *s4 = r._return.resultElements.__ptr[i].title;
        const char *s5 = r._return.resultElements.__ptr[i].cachedSize;
        const char *s6 = r._return.resultElements.__ptr[i].directoryTitle;

	/* skipped printing of directoryCategory field */
        printf("[%3d]\tSummary        = %s\n", i+1, s1?s1:"<NONE>");
        printf("\ttitle          = %s\n", s4?s4:"<NONE>");
        printf("\tURL            = %s\n", s2?s2:"<NONE>");
        printf("\tsnippet        = %s\n", s3?s3:"<NONE>");
        printf("\tcachedSize     = %s\n", s5?s5:"<NONE>");
        printf("\trelatedInfo    = %d\n", (int)r._return.resultElements.__ptr[i].relatedInformationPresent);
        printf("\tdirectoryTitle = %s\n", s6?s6:"<NONE>");
      }
      printf("directoryCategories      = \n");
      for (i = 0; i < r._return.directoryCategories.__size; i++)
      { const char *s1 = r._return.directoryCategories.__ptr[i].fullViewableName;
        const char *s2 = r._return.directoryCategories.__ptr[i].specialEncoding;
        printf("\t%s\t%s\n", s1?s1:"<NONE>", s2?s2:"<NONE>");
      }
    }
  }
  else if (!strcmp(dir, "cached"))
  {
    struct xsd__base64Binary r;

    if (soap_call_api__doGetCachedPage(&soap, "http://api.google.com/search/beta2", "urn:GoogleSearchAction", key, arg, &r))
    {
      soap_print_fault(&soap, stderr);
      exit(1);
    }
    else
    {
      int i;

      for (i = 0; i < r.__size; i++)
        putchar(r.__ptr[i]);
      putchar('\n');
    }
  }
  else if (!strcmp(dir, "spell"))
  {
    char *r;

    if (soap_call_api__doSpellingSuggestion(&soap, "http://api.google.com/search/beta2", "urn:GoogleSearchAction", key, arg, &r))
    {
      soap_print_fault(&soap, stderr);
      exit(1);
    }
    else
      printf("Suggested spelling: %s\n", r?r:"<NONE>");
  }
  else
    fprintf(stderr, "Unknown directive\n");

  /* remove all temporary and deserialized data */
  soap_end(&soap);

  /* detach run-time engine and context */
  soap_done(&soap);

  return 0;
}
