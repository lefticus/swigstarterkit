#include "scriptinterface.hpp"

namespace swigstarterkit
{
  struct Script_Interface::impl
  {
  };

  Script_Interface::Script_Interface()
    : p_impl(new impl())
  {
  }
  
  Script_Interface::~Script_Interface()
  {
    delete p_impl;
  }

  int Script_Interface::get_a_value()
  {
    return 5;
  }

}

