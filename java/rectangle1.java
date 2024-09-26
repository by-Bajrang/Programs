
class rectangle
{
    public double length;
    public double breath;

    public double area()
    {
        return length*breath;
    }

    public double  perimeter()
    {
        return 2*(length+breath);
    }
}
public class rectangle1 {
   
    public static void main(String[] args)
    {
        rectangle r1 = new rectangle();
        r1.length = 4;
        r1.breath = 6;

        System.out.println("area >> "+r1.area());
        System.out.println("perimeter >> "+r1.perimeter());

    }
   
}
