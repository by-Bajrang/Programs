

import java.util.Scanner;

public class binary {
    
    public static void main(String arg[])
    {
        // System.out.println("enter a no.>> ");
        // Scanner s = new Scanner(System.in);
        // int b =s.nextInt();
        int b = 100010;
        String str =  String.valueOf(b);
        System.out.println(str.matches("[01]*"));

        // for hexadecimal
        String str1 = "a542a";
        System.out.println(str1.matches("[0-9A-F]+"));

        // for date fo birth
        String str2 = "21/04/2003";
        System.out.println(str2.matches("[0-3][0-9]/[0-1][0-9]/[0-9]{4}"));

        // remove special characters from string 
        String str3 = "a!B@c#$2%3";
        // String str4 = str3.replace("!", "");
       String str4 = str3.replaceAll("[^a-zA-Z0-9]","");
        System.out.println(str4);

        // replace 3 spaces with single space
        String str5 = "abc   de   fgh   ijk  ";
        System.out.println(str5.replaceAll("[      ]",""));
        System.out.println(str5.replaceAll("\\s", ""));
        
    }
}
