SUBDIRS=examples

BUILT_SOURCES = swigstarterkit_wrap.cpp
dist_data_DATA = languagespecific.i

AM_CPPFLAGS = -I$(top_srcdir)/include 

lib_LTLIBRARIES = libswigstarterkit_cs.la

libswigstarterkit_cs_la_LIBADD = ../../lib/libSSK.la 
libswigstarterkit_cs_la_SOURCES = swigstarterkit_wrap.cpp
libswigstarterkit_cs_la_LDFLAGS = -release $(VERSION)


swigstarterkit_wrap.cpp: ../scriptinterface.i languagespecific.i
	if [ ! -d build ]; then mkdir build; fi
	swig -c++ -csharp -o ./swigstarterkit_wrap.cpp -I$(top_srcdir)/include -outdir ./build -dllimport swigstarterkit_cs ../scriptinterface.i 


