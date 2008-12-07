SUBDIRS=examples

BUILT_SOURCES = build/$(PACKAGE_NAME)_wrap.cpp build/setup.py
noinst_SCRIPTS = languagespecific.i README

build/$(PACKAGE_NAME)_wrap.cpp: ../scriptinterface.i languagespecific.i $(top_srcdir)/include/scriptinterface.hpp
	if [ ! -d build ]; then mkdir build; fi
	swig -c++ -python -o build/$(PACKAGE_NAME)_wrap.cpp -I$(top_srcdir)/include -outdir build ../scriptinterface.i

build/setup.py:
	echo "#!/usr/bin/python" > build/setup.py
	echo "from distutils.core import setup, Extension" >> build/setup.py
	echo "setup(name='$(PACKAGE_NAME)'," >> build/setup.py
	echo "version='$(PACKAGE_VERSION)'," >> build/setup.py
	echo "include_dirs=['../../include']," >> build/setup.py
	echo "py_modules=['$(PACKAGE_NAME)']," >> build/setup.py
	echo "author='Jason Turner'," >> build/setup.py
	echo "author_email='$(PACKAGE_BUGREPORT)'," >> build/setup.py
	echo "url='http://blog.emptycrate.com'," >> build/setup.py
	echo "description='Python wrapper to the C++ $(PACKAGE_NAME) library'," >> build/setup.py
	echo "ext_modules=[Extension('_$(PACKAGE_NAME)', ['$(PACKAGE_NAME)_wrap.cpp']," >> build/setup.py
	echo "library_dirs=['../../src/.libs']," >> build/setup.py
	echo "libraries=['SSK']," >> build/setup.py
	echo ")]," >> build/setup.py
	echo ")" >> build/setup.py
	chmod +x build/setup.py

