import java.util.*;  // this is for scanner
// import java.util.Scanner;  // this is not meed for scanner 

public class grades {
    
    public static void main(String arg[])
    {
        
     System.out.println("enter your no>>");
     Scanner s = new Scanner(System.in);
     int i = s.nextInt();
     if(i<20)
     {
        System.out.println("grade>>F");
     }
     else if(i<40)
     {
        System.out.println("grade>>D");
     }
     else if(i<60)
     {
        System.out.println("grade>>C");
     }
     else if(i<70)
    {
        System.out.println("grade>>B");
    }
    else if(i>70)
    {
        System.out.println("grade>>A");
    }

    }
}
