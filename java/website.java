import java.util.Scanner;
public class website {
    
    public static void main(String arg[])
    {
        Scanner s = new Scanner(System.in);
        System.out.println("enter a website name>> ");
        String str = s.next();
        int i = str.indexOf(":");
        String str1 = str.substring(0, i);
        if(str1.equals("http"))
        {
            System.out.println("Hypertext trnsfer protocol");
        }
        else System.out.println("file trnsfer protocol");
    }
}
