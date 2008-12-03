SUBDIRS=examples

BUILT_SOURCES = $(PACKAGE_NAME)_wrap.cpp
bin_SCRIPTS = setup.py
dist_data_DATA = languagespecific.i

$(PACKAGE_NAME)_wrap.cpp: ../scriptinterface.i languagespecific.i
	if [ ! -d build ]; then mkdir build; fi
	swig -c++ -python -o $(PACKAGE_NAME)_wrap.cpp -I$(top_srcdir)/include -outdir . ../scriptinterface.i

setup.py:
	echo "#!/usr/bin/python" > setup.py
	echo "from distutils.core import setup, Extension" >> setup.py
	echo "setup(name='$(PACKAGE_NAME)'," >> setup.py
	echo "version='$(PACKAGE_VERSION)'," >> setup.py
	echo "include_dirs=['../../include']," >> setup.py
	echo "py_modules=['$(PACKAGE_NAME)']," >> setup.py
	echo "author='Jason Turner'," >> setup.py
	echo "author_email='$(PACKAGE_BUGREPORT)'," >> setup.py
	echo "url='http://blog.emptycrate.com'," >> setup.py
	echo "description='Python wrapper to the C++ $(PACKAGE_NAME) library'," >> setup.py
	echo "ext_modules=[Extension('_$(PACKAGE_NAME)', ['$(PACKAGE_NAME)_wrap.cpp']," >> setup.py
	echo "library_dirs=['../../src/.libs']," >> setup.py
	echo "libraries=['SSK']," >> setup.py
	echo ")]," >> setup.py
	echo ")" >> setup.py
	chmod +x setup.py

