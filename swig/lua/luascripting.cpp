#include "luascripting.hpp"
#include <stdexcept>

extern "C" 
{
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
}

#include "SwigStarterKit_wrap.hpp"

namespace swigstarterkit 
{
  Lua_Scripting::Lua_Scripting(Script_Interface &t_si)
  {
    m_lua = lua_open();

    luaL_reg lualibs[] = {
      {"base", luaopen_base},
      {"table", luaopen_table},
      /* {"io", luaopen_io}, */
      {"string", luaopen_string},
      {"math", luaopen_math},
      {"debug", luaopen_debug},
      /*{"loadlib", luaopen_loadlib}, */
      /* add your libraries here */
      {SWIG_name, SWIG_init},
      {NULL, NULL}
    };

    for(int i=0; lualibs[i].func != 0 ; i++) {
      lualibs[i].func(m_lua);  /* open library */
      lua_settop(m_lua, 0);  /* discard any results */
    }

    SWIG_NewPointerObj(m_lua, &t_si, SWIGTYPE_p_swigstarterkit__Script_Interface, false);
    lua_setglobal(m_lua, "m_scripting_interface");
  }

  Lua_Scripting::~Lua_Scripting()
  {
    lua_close(m_lua);
  }

  void Lua_Scripting::run_script(const std::string &scripttext)
  {
    if (luaL_dostring(m_lua, scripttext.c_str())) {
      std::string errstring = lua_tostring(m_lua, lua_gettop(m_lua));
      throw std::runtime_error("Error executing lua script: " + errstring);
    }
  }
}


