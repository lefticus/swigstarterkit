SUBDIRS=examples

BUILT_SOURCES = build/$(PACKAGE_NAME)_wrap.cpp
noinst_SCRIPTS = build/Makefile.PL
noinst_DATA = languagespecific.i README

# Build the SWIG based dynamic library for loading with Perl
build/$(PACKAGE_NAME)_wrap.cpp: ../scriptinterface.i languagespecific.i $(top_srcdir)/include/scriptinterface.hpp
	if [ ! -d build ]; then mkdir build; fi
	swig -c++ -perl -o ./build/$(PACKAGE_NAME)_wrap.cpp -I$(top_srcdir)/include -outdir ./build ../scriptinterface.i

# Build Makefile.PL which uses the perl MakeMaker to generate a perl module
# from the SWIG output
build/Makefile.PL: 
	echo "#!/usr/bin/perl" > build/Makefile.PL
	echo "use ExtUtils::MakeMaker;" >> build/Makefile.PL
	echo "WriteMakefile(" >> build/Makefile.PL
	echo "'NAME' => $(PACKAGE_NAME)," >> build/Makefile.PL
	echo "'LIBS' => ['-lSSK -L../../../lib/.libs']," >> build/Makefile.PL
	echo "'INC' => '-I../../../include'," >> build/Makefile.PL
	echo "'OBJECT' => '$(PACKAGE_NAME)_wrap.o'" >> build/Makefile.PL
	echo ");" >> build/Makefile.PL
	chmod +x build/Makefile.PL

