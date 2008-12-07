/*
   Copyright (c) 2008 Jason Turner http://emptycrate.com

   Permission is hereby granted, free of charge, to any person obtaining a copy 
   of this software and associated documentation files (the "Software"), to 
   deal in the Software without restriction, including without limitation the 
   rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
   sell copies of the Software, and to permit persons to whom the Software is 
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in 
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
   THE SOFTWARE.
*/

#ifndef __SSK_SCRIPTINTERFACE_HPP__
#define __SSK_SCRIPTINTERFACE_HPP__

#include <string>
#include <vector>
#include <algorithm>

namespace swigstarterkit
{
  // We are setting ourselves up to use the pimpl idiom here
  // this is important because it will help reduce the interface
  // seen by SWIG as our impl gets more advanced
  struct Script_Interface_Impl;

  // function template example
  // Function sorts any std container based on the contained
  // < operator
  template<typename T>
    void sort(T &t)
    {
      std::sort(t.begin(), t.end());
    }


  class Script_Interface
  {
    public:
      Script_Interface();
      ~Script_Interface();

      int get_a_value();

      // stl examples
      std::vector<std::string> &get_script_responses();
      void add_script_response(const std::string &response);

    private:
      Script_Interface_Impl *p_impl;
  };
}

#endif
