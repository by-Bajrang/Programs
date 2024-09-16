public class lenth {
    
    public static void main(String arg[])
    {
        // length()
        String str = "java";
        int l = str.length();
        System.out.println(l);
        
        // toUpperCase() or toLowerCase()
        String s = str.toUpperCase();
        System.out.println(s);

        str= str.toUpperCase();
        System.out.println(str);

        // trim()
        String str1 = "  bajrng  "; 
        String str2 = str1.trim();
        System.out.println(str2);

        // substring 
        String str3 = str1.substring(5);
        System.out.println(str3);
        String str4 = str1.substring(2,9);
        System.out.println(str4);

        // replace
        String g = "bakabuki";
        String s1 = g.replace('a','u');
        System.out.println(s1);
        

        // startWith
        String A ="www.google.com";
        boolean r = A.startsWith("www");
        System.out.println(r);
        boolean q = A.endsWith("com");
        System.out.println(q);
        
        // char
        char z =A.charAt(2);
         System.out.println(z);

         //index of character
         int I = A.indexOf('g');
         int d = A.indexOf(".g");
         int w = A.indexOf(".",6);
         System.out.println(I);
         System.out.println(d);
         System.out.println(w);
         // search from last
         int p = A.lastIndexOf('.');
         System.out.println(p);


    }
}
