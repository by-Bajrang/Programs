import java.util.Scanner;
public class radix {
    
    public static void main(String arg[])
    {
        System.out.println("enter any no.>>");
        Scanner s = new Scanner(System.in);
        String str = s.next();

        if(str.matches("[10*]") == true)
        {
            System.out.println("binary");
        }
        else if(str.matches("[0-7]*") == true)
        { 
            System.out.println("octal");
        }
        else if(str.matches("[0-9a-fA-F]*")==true)
        {
          System.out.println("hexadecimal");
        }
        else if(str.matches("[0-9]*")== true)
        {
            System.out.println("decimal");
        }
        
    }
}
