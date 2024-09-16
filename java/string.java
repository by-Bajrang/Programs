public class string {
    
    public static void main(String arg[])
    {
        String str1 = "java program";
        String str2 = new String("JAVA");

        System.out.println(str2);

        char c[] = {'h','e','l','l','o'};
        String str3 = new String(c,3,2);
        System.out.println(str3);

        byte b[]={65,66,67,68};
        String str4 = new String(b,2,2);
        System.out.println(str4);

        String str5 = "java";
        String str6 = "java";
        String str7 = new String("java");
        System.out.println(str5==str6);
        System.out.println(str5==str7);

    }
}
