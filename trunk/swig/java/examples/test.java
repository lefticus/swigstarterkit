public class test {
  static {
    System.loadLibrary("swigstarterkit_jni");
  }

  public static void main (String argv[]) {
    Script_Interface si = new Script_Interface();
    System.out.println(si.get_a_value());
  }
}
