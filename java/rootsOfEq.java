import java.util.Scanner;

public class rootsOfEq {
    
    public static void main(String arg[])
    {
        System.out.println("enter 3 cofficient fo eqs>>");
        Scanner s=new Scanner(System.in);
         int a =s.nextInt();
         int b =s.nextInt();
         int c =s.nextInt();
         double r1,r2;
         r1=(-b+Math.sqrt(b*b-(4*a*c)))/(2*a);
         r2=(-b-Math.sqrt(b*b-(4*a*c)))/(2*a);
        System.out.println("first roots is>>"+r1+" "+r2);
        // System.out.println("second root is>>"+r2);

    }
}
