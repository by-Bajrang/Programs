import java.util.Scanner;

public class trianglearea {
    
    public static void main(String arg[])
    {
        int a,b,c;
        float t;
        double area;
        System.out.println("enter three side of triangle>>");
        Scanner s= new Scanner(System.in);
        a=s.nextInt();
        b=s.nextInt();
        c=s.nextInt();
        t= (a+b+c)/2f;
        // or s=(float)(a+b+c)/2;
        area=Math.sqrt(t*(t-a)*(t-b)*(t-c));//it always give double
        System.out.println(area);
    }
}
