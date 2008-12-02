%module(directors="1") SwigStarterKit

%include <std_string.i>
%include <std_vector.i>

%include "languagespecific.i"

%{
#include "scriptinterface.hpp"
%}

%include "scriptinterface.hpp"

%template(String_Vector) std::vector<std::string>;
%template(String_Vector_Sort) swigstarterkit::sort<std::vector<std::string> >;
