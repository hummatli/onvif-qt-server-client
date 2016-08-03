
How container templates are serialized
======================================

In the gSOAP header file (the file processed by soapcpp2) a container template
can be introduced (but code should NOT be defined in the header file):

    template <class T> class mycontainer;

and it can be used as needed in the same gSOAP header file to serialize
containers of values in XML (similar to std::vector):

    mycontainer<int> ...
    mycontainer<someclass> ... etc

compare this to:

    std::vector<int>

The "real" container template must be defined in a regular header file and
implemented as well. For XML serialization to work with the template, the
template must define at least four methods with similar functionality to
std::vector:

    iterator begin();
    iterator end();
    size_t   size();
    iterator insert(iterator pos, const_reference val)

These four methods allow the gSOAP serializers to read and write the container
content in XML format. Of course, how you define these is up to you. A
container can also store just one value, or you can use it to serialize trees
and graphs, or even produce and consume content dynamically. You could define
the templates as processors of (de)serialized XML content embedded in XML
messages. Because the serializers are invoked twice to send a message over HTTP
(one pass to compute the content length when chunking is off, then to send the
HTTP body), you MUST ensure that the template instance's iterator produces the
same content in the two-phase HTTP count/send (or use chunking).

Example
-------

The example code in this directory is kept small to highlight the basic
features. The possibilities are endless.

In order to use container templates, you need at least one file that defines
the container and its implementation. In the example code here, we defined the
container template in:

    simple_vector.h

The application is a prime sieve:

    primes.cpp

which computes primes and stores them in the container. The primes application
uses the 'primes' class defined in the gSOAP header file:

    primes.h

which is parsed by soapcpp2 to generate all the 'primes' class serialization
routines to dump the XML content of the container, i.e. the list of primes.

Note that the 'primes' class is derived from the soap struct, which means that
a soap struct is associated with the class to allow a serialization context to
be carried along with it. This also minimizes the need to write code to setup
the soap context for XML serialization etc.

