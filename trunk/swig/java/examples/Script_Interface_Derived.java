public class Script_Interface_Derived extends Script_Interface
{
  static {
    //Load the library based off of the lib filename, not the module
    //name used to create it
    System.loadLibrary("swigstarterkit_jni");
  }

  public Script_Interface_Derived()
  {
  }

  public String overloadable_string_get()
  {
    return "Hello from Java";
  }
}
