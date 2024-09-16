public class question {
    
    public static void main(String arg[])
    {
      
    String str = "programer@gmail.com";
    
    int i = str.indexOf("@");
    String  uname = str.substring(0, i );
    String  domain = str.substring(i+1, str.length());
    System.out.println("username>> "+uname);
    System.out.println("Domain name>> "+ domain);
    System.out.println(str.matches(".*gmail.com"));
    boolean n = str.endsWith("com");
    System.out.println(n);
    System.out.println(domain.startsWith("gmail"));

    }

}
