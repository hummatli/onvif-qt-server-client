Apache 1.3 modules for gSOAP

The modules are released under the gSOAP open source public license, see
license.pdf in the gSOAP root dir of the package.

This directory contains the sources for building the mod_gsoap Apache module
for Apache 1.3.

Here's the quick start way to build your own DSO.

./configure [--with-gsoap=/alternate/path/to/soapcpp2]
make

For more details you can see the apache_index.html, but it is not wholly up to
date.

Requirements:

apache compiled with --enable-module=so and installed
apxs in path and working
libtool installed.
