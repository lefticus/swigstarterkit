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
    std::cout << " Executing script: " << ss.str();
    ls.run_script(ss.str());
  }
}
