
 class circle
{
    public double radius;

    public double area()
    {
        return Math.PI*radius*radius;
    }
    
    public  double perimeter() // it dose not take any parameter
    {
       return 2*Math.PI*radius;
    }
    public double circumference()
    {
        return perimeter();
    }
}
public class circle11 {
    
    public static void main(String[] args)
    {
       circle c1 = new circle(); // create object
       System.out.println(c1.area());
       System.out.println(c1.perimeter());
       System.out.println(c1.circumference());
    }
}

