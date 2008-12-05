SUBDIRS=examples

BUILT_SOURCES = swigstarterkit_wrap.cpp
dist_data_DATA = languagespecific.i

AM_CPPFLAGS = -I$(top_srcdir)/include -I/usr/lib/jvm/java-6-sun-1.6.0.10/include/ -I/usr/lib/jvm/java-6-sun-1.6.0.10/include/linux

lib_LTLIBRARIES = libswigstarterkit_jni.la

libswigstarterkit_jni_la_LIBADD = ../../lib/libSSK.la 
libswigstarterkit_jni_la_SOURCES = swigstarterkit_wrap.cpp
libswigstarterkit_jni_la_LDFLAGS = -release $(VERSION)


swigstarterkit_wrap.cpp: ../scriptinterface.i languagespecific.i
	if [ ! -d build ]; then mkdir build; fi
	swig -c++ -java -o ./swigstarterkit_wrap.cpp -I$(top_srcdir)/include -outdir ./build ../scriptinterface.i


