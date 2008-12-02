#include "scriptinterface.hpp"

namespace swigstarterkit
{
  struct Script_Interface_Impl
  {
    int get_a_value()
    {
      return 5;
    }
    std::vector<std::string> &get_script_responses()
    {
      return m_responses;
    }

    void add_script_response(const std::string &response)
    {
      m_responses.push_back(response);
    }

    std::vector<std::string> m_responses;

  };

  Script_Interface::Script_Interface()
    : p_impl(new Script_Interface_Impl())
  {
  }
  
  Script_Interface::~Script_Interface()
  {
    delete p_impl;
  }

  int Script_Interface::get_a_value()
  {
    return p_impl->get_a_value();
  }

  std::vector<std::string> &Script_Interface::get_script_responses()
  {
    return p_impl->get_script_responses();
  }

  void Script_Interface::add_script_response(const std::string &response)
  {
    p_impl->add_script_response(response);
  }

}

