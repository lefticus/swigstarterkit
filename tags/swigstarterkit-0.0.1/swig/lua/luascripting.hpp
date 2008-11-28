#ifndef __SSK_LUA_SCRIPTING_HPP__
#define __SSK_LUA_SCRIPTING_HPP__

#include "scriptinterface.hpp"
#include <string>

struct lua_State;

namespace swigstarterkit 
{
  class Lua_Scripting
  {
    public:

      Lua_Scripting(Script_Interface &t_si);

      ~Lua_Scripting();

      void run_script(const std::string &scripttext);

    private:
      lua_State *m_lua;
  };
}

#endif

