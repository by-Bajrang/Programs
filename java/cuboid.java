import java.util.Scanner;

public class cuboid {
 
    public static void main(String arg[])
    {
        Scanner s = new Scanner(System.in);
        int length,breadth,height;
        int totalArea,volume;

        System.out.println("enter length breadth height>>");
        length =s.nextInt();
        breadth =s.nextInt();
        height =s.nextInt();

        totalArea =2*(length*breadth+breadth*height+height*length);
        volume =length*height*breadth;
        
        System.out.println("area >>"+totalArea+"volume>>"+volume);

        
    }
}
