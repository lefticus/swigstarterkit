SUBDIRS=examples

BUILT_SOURCES = swigstarterkit_wrap.cpp build/Makefile
noinst_DATA = languagespecific.i README

AM_CPPFLAGS = -I$(top_srcdir)/include 

lib_LTLIBRARIES = libswigstarterkit_cil.la

#We set the name to libswigstarterkit_cil to make sure that it does
#not conflict with other built/installed interface libraries, such
#as the java libswigstarterkit_jni
libswigstarterkit_cil_la_LIBADD = ../../lib/libSSK.la 
libswigstarterkit_cil_la_SOURCES = swigstarterkit_wrap.cpp
libswigstarterkit_cil_la_LDFLAGS = -release $(VERSION)

#note that the -dllimport is set to swigstarterkit_cil
#instead of the default swigstarterkit because the name of our built library
#does not match the name of the module
swigstarterkit_wrap.cpp: ../scriptinterface.i languagespecific.i $(top_srcdir)/include/scriptinterface.hpp
	if [ ! -d build ]; then mkdir build; fi
	swig -c++ -csharp -o ./swigstarterkit_wrap.cpp -I$(top_srcdir)/include -outdir ./build -dllimport swigstarterkit_cil ../scriptinterface.i 

build/Makefile: swigstarterkit_wrap.cpp
	echo swigstarterkit.dll: `find build/*.cs -printf "%f "` > build/Makefile
	echo -e -n "\tgmcs -target:library -out:swigstarterkit.dll " >> build/Makefile
	echo `find build/*.cs -printf "%f "`>>  build/Makefile

