public class stringMethode {
    public static void main(String arg[])
    {
        String str1 = "JAVA";
        String str2 = "python";
        String str3 = "python";
        String str4 = "java";
        String str5 = new String("java");
        String str6 = "great wall of china";
        
        boolean l = str2.equals(str3);
        boolean k = str2.equals(str1);
        System.out.println(l);
        System.out.println(k);

        //  equalIgnorCase 
        boolean a = str1.equalsIgnoreCase(str4);// eskav matlab hai ke upper case and lower case choro or andar ka content dekho same hia tho true
        System.out.println(a);

        // compair
        int n1 = str4.compareTo(str3);
        int n2 = str1.compareTo(str4);
        System.out.println(n1);

        // == 
        System.out.println(str1==str4);
        System.out.println(str4==str5);

        // cheking string have this word or not
        System.out.println(str6.contains("wall"));

        // adding two string 
        String m1 = "great wall ";
        String m2 = "of china";
        System.out.println(m1.concat(m2));
        System.out.println(m1+m2);
    }
}
 