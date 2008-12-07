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

#include "scriptinterface.hpp"
#include "luascripting.hpp"

#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>



int main(int argc, const char *argv[])
{
  std::vector<std::string> sargs(argv, argv + argc);

  if (sargs.size() != 3)
  {
    std::cout << "Syntax: " << sargs[0] << " <language> <filename>" << std::endl;
    return -1;
  }

  if (sargs[1] == "lua")
  {
    swigstarterkit::Script_Interface si;
    swigstarterkit::Lua_Scripting ls(si);
    std::ifstream f1(sargs[2].c_str(), std::fstream::binary);
    std::stringstream ss;
    ss << f1.rdbuf();
    std::cout << "Executing script: " << std::endl << ss.str() << std::endl;
    std::cout << "================= " << std::endl;
    ls.run_script(ss.str());
    std::cout << "================= " << std::endl;
    std::cout << "Script Responses: " << std::endl;

    int count(0);
    for (std::vector<std::string>::const_iterator itr(si.get_script_responses().begin());
         itr != si.get_script_responses().end();
         ++itr, ++count)
    {
      std::cout << "Resp "<< count << ": " << *itr << std::endl;
    }    

  }
}
