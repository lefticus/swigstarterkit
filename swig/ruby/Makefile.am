SUBDIRS=examples

BUILT_SOURCES = build/$(PACKAGE_NAME)_wrap.cpp
noinst_SCRIPTS = build/extconf.rb
noinst_DATA = languagespecific.i README

build/$(PACKAGE_NAME)_wrap.cpp: ../scriptinterface.i languagespecific.i
	if [ ! -d build ]; then mkdir build; fi
	swig -c++ -ruby -o ./build/$(PACKAGE_NAME)_wrap.cpp -I$(top_srcdir)/include -outdir ./build ../scriptinterface.i

build/extconf.rb: 
	echo "require 'mkmf'" > build/extconf.rb
	echo "have_library('SSK', 'main')" >> build/extconf.rb
	echo "create_makefile('$(PACKAGE_NAME)')" >> build/extconf.rb

