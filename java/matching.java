public class matching {
    public static void main(String arg[])
    {
    //     // .
    //    String str1 = " 5";// iska ans false ayega kuki yaha 2 items present hai 
    //    System.out.println(str1.matches(".")); 
        
    //    // [abc]
    //    String str2 = "a";
    //    System.out.println(str2.matches("[abc]"));

    //    //[abc][xz]
    //    String str3 = "c9";// it take only two characters  samja kya na kam na jyada
    //    System.out.println(str3.matches("[a-z][0-9]"));

    //    // a|b
    //    String str4 = "a";
    //    System.out.println(str4.matches("a|b"));

    //    //   \w
    //    String str5 = "5";
    //    System.out.println(str1.matches("\\d"));
        



       // quantifiers
       
       // * zero or more times
       String str6 = "adfsjf1";
       System.out.println(str6.matches(".*"));
       
       String str7 = "a5dfsjf";
       System.out.println(str7.matches("[a-x]*"));
       
       String str8 = "acc";
       System.out.println(str8.matches("[abc]{3}"));

      
    }
}
