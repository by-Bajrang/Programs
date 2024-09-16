import java.util.Scanner;

public class areaOfTrinagel {
    public static void main(String arg[])
    {
        float base,height,area;
        System.out.println("enter base and height>>");
        Scanner s= new Scanner(System.in);
        base = s.nextFloat();
        height = s.nextFloat();
        area = (base*height)/2;
        System.out.println("area of triangle>>"+area);


    }
}
