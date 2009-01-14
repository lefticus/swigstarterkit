
using System;

public class Script_Interface_CS : Script_Interface
{

  public override string overloadable_string_get()
  {
    return "Hello from C#";
  }
}

public class test {
  static void Main() {
    Script_Interface_CS si = new Script_Interface_CS();
    Console.WriteLine(si.get_a_value());
    Console.WriteLine(swigstarterkit.get_string(si));
  }
}


