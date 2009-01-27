public class test {
  public static void main (String argv[]) {
    Script_Interface si = new Script_Interface_Derived();
    System.out.println(si.get_a_value());
    System.out.println(swigstarterkit.get_string(si));
  }
}
