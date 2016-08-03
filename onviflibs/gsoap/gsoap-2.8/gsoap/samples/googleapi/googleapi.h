/*
	googleapi.h
	
	Google Web APIs

	Note: the Google API server needs typed messages.
	Use soapcpp2 -t to generated serialization code for typed xsi:type
	messages. The '//gsoapopt t' directive is also sufficient.
*/

//gsoapopt t

//gsoap api service name:	googleapi
//gsoap api service style:	rpc
//gsoap api service encoding:	encoded
//gsoap api service location:	http://api.google.com/search/beta2
//gsoap api service namespace:	urn:GoogleSearch

typedef char *	xsd__string;

// C++ alternative for xsd:boolean:
// typedef bool	xsd__boolean;
// pure C alternative is:
typedef enum {false_, true_} xsd__boolean;

typedef int	xsd__int;

typedef double	xsd__double;

struct xsd__base64Binary
{	unsigned char *			__ptr;
	int				__size;
};

struct api__DirectoryCategory
{	xsd__string			fullViewableName;
	xsd__string			specialEncoding;
};

struct DirectoryCategoryArray
{	struct api__DirectoryCategory *	__ptr;
	int				__size;
};

struct api__ResultElement
{	xsd__string			summary;
	xsd__string			URL;
	xsd__string			snippet;
	xsd__string			title;
	xsd__string			cachedSize;
	xsd__boolean			relatedInformationPresent;
	xsd__string			hostName;
	struct api__DirectoryCategory	directoryCategory;
	xsd__string			directoryTitle;
};

struct ResultElementArray
{	struct api__ResultElement *	__ptr;
	int				__size;
};

struct api__GoogleSearchResult
{	xsd__boolean			documentFiltering;
	xsd__string			searchComments;
	xsd__int			estimatedTotalResultsCount;
	xsd__boolean			estimateIsExact;
	struct ResultElementArray	resultElements;
	xsd__string			searchQuery;
	xsd__int			startIndex;
	xsd__int			endIndex;
	xsd__string			searchTips;
	struct DirectoryCategoryArray	directoryCategories;
	xsd__double			searchTime;
};

api__doGoogleSearch
(	xsd__string			key,
	xsd__string			q,
	xsd__int			start,
	xsd__int			maxResults,
	xsd__boolean			filter,
	xsd__string			restrict_,
	xsd__boolean			safeSearch,
	xsd__string			lr,
	xsd__string			ie,
	xsd__string			oe,
	struct api__doGoogleSearchResponse
	{	struct api__GoogleSearchResult	_return;
	}				*response
);

api__doGetCachedPage
(	xsd__string			key,
	xsd__string			url,
	struct xsd__base64Binary	*_return
);

api__doSpellingSuggestion
(	xsd__string			key,
	xsd__string			phrase,
	xsd__string			*_return
);

