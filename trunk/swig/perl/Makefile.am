SUBDIRS=examples

BUILT_SOURCES = $(PACKAGE_NAME)_wrap.cpp
bin_SCRIPTS = build/Makefile.PL
dist_data_DATA = languagespecific.i

$(PACKAGE_NAME)_wrap.cpp: ../scriptinterface.i languagespecific.i
	if [ ! -d build ]; then mkdir build; fi
	swig -c++ -perl -o ./build/$(PACKAGE_NAME)_wrap.cpp -I$(top_srcdir)/include -outdir ./build ../scriptinterface.i

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

