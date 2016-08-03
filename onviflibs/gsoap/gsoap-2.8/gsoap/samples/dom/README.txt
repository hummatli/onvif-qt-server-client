
DOM example based on the calculator service (samples/calc). This example
implements a DOM-message-based calculator client.

See gsoap/doc/dom/html/index.html for the DOM API documentation.

C and C++ types can be serialized and deserialized automatically in a DOM
object. To do this, enable the SOAP_DOM_NODE flag and make sure that either
xsi:types attribute values or XML element/attribute tag names match the name of
the type definitions in the gSOAP header specification file:

dom2calc.h

The deserialization only works when xsi:type attributes are present in messages
or when XML element or attribute tag names match the type name. A deserializer
is chosen based on these tag names xsi:type attribute value. For example, when
an element has an xsi:type="xsd:double" attribute and SOAP_DOM_NODE is set,
then the xsd__double type is deserialized into the void *soap_dom_element::node
(points to a double) and soap_dom_element::type==SOAP_TYPE_xsd__double.

Likewise, when an element tag name is <result>, then the 'result' deserializer
is invoked to populate void *soap_dom_element::node (points to double) and
soap_dom_element::type==SOAP_TYPE_result.

In C++ use the soap_dom_element::set() method to set an object in DOM and use
the soap_dom_element::find() method to search for objects.

When declaring types for elements and attributes in a gSOAP header file for
processing with soapcpp2, it is advised to use a leading '_' to prevent them
from being (de)serialized as types. The leading '_' suppresses the rendering of
xsi:type.
