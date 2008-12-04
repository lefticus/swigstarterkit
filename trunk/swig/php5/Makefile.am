SUBDIRS=examples

BUILT_SOURCES = build/config.m4
dist_data_DATA = languagespecific.i

build/config.m4: ../scriptinterface.i languagespecific.i
	if [ ! -d build ]; then mkdir build; fi
	swig -php5 -c++ -phpfull -withlibs "SSK"  -I../../include -o build/$(PACKAGE_NAME)_wrap.cpp -oh build/$(PACKAGE_NAME)_wrap.hpp -outdir build ../scriptinterface.i

