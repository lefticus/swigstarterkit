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
