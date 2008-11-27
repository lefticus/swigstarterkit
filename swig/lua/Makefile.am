SUBDIRS=examples

BUILT_SOURCES = $(PACKAGE_NAME)_wrap.h
dist_data_DATA = languagespecific.i

AM_CPPFLAGS = -I$(top_srcdir)/include $(LUA_CFLAGS)

lib_LTLIBRARIES = libSSKLua.la
pkglib_LTLIBRARIES = SwigStarterKit.la

libSSKLua_la_LIBADD = ../../lib/libSSK.la $(LUA_LIBS)
libSSKLua_la_SOURCES = luascripting.cpp luascripting.hpp $(PACKAGE_NAME)_wrap.hpp
libSSKLua_la_LDFLAGS = -release $(VERSION)

SwigStarterKit_la_SOURCES = $(PACKAGE_NAME)_wrap.hpp sskluamod.cpp
SwigStarterKit_la_LDFLAGS = -module
SwigStarterKit_la_LIBADD = ../../lib/libSSK.la $(LUA_LIBS)

$(PACKAGE_NAME)_wrap.hpp: ../scriptinterface.i languagespecific.i
		swig -c++ -lua -o $(PACKAGE_NAME)_wrap.hpp -I$(top_srcdir)/include  -outdir . ../scriptinterface.i

