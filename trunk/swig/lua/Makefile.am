SUBDIRS=examples

BUILT_SOURCES = $(PACKAGE_NAME)_wrap.hpp
noinst_DATA = languagespecific.i README

AM_CPPFLAGS = -I$(top_srcdir)/include $(LUA_CFLAGS)

lib_LTLIBRARIES = libSSKLua.la
pkglib_LTLIBRARIES = swigstarterkit.la

# build library for embedded use and use with the ssk binary
libSSKLua_la_LIBADD = ../../lib/libSSK.la $(LUA_LIBS)
libSSKLua_la_SOURCES = luascripting.cpp luascripting.hpp $(PACKAGE_NAME)_wrap.hpp
libSSKLua_la_LDFLAGS = -release $(VERSION)

# build loadable module for use with teh standalone lua executable
swigstarterkit_la_SOURCES = $(PACKAGE_NAME)_wrap.hpp sskluamod.cpp
swigstarterkit_la_LDFLAGS = -module
swigstarterkit_la_LIBADD = ../../lib/libSSK.la $(LUA_LIBS)

$(PACKAGE_NAME)_wrap.hpp: ../scriptinterface.i languagespecific.i $(top_srcdir)/include/scriptinterface.hpp
		swig -c++ -lua -o $(PACKAGE_NAME)_wrap.hpp -I$(top_srcdir)/include  -outdir . ../scriptinterface.i

