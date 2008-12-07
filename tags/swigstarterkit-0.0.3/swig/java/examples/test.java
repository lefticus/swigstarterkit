public class test {
  static {
    //Load the library based off of the lib filename, not the module
    //name used to create it
    System.loadLibrary("swigstarterkit_jni");
  }

  public static void main (String argv[]) {
    Script_Interface si = new Script_Interface();
    System.out.println(si.get_a_value());
  }
}
