#ifndef __SSK_SCRIPTINTERFACE_HPP__
#define __SSK_SCRIPTINTERFACE_HPP__

namespace swigstarterkit
{
  class Script_Interface
  {
    public:
      Script_Interface();
      ~Script_Interface();

      int get_a_value();

    private:
      struct impl;
      impl *p_impl;
  };
}

#endif
