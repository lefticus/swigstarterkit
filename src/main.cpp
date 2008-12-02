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
