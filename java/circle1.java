

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
public class circle1 {
    
    public static void main(String[] args)
    {
       circle c1 = new circle(); // create object
       circle c2 = new circle(); // 2nd object
       
       c1.radius = 7;
       c2.radius = 14;
       System.out.println("area >> "+c1.area());
       System.out.println("peremeter >> "+c1.perimeter());
       System.out.println("circumference >> "+c1.circumference());

       System.out.println("area2 >> "+c2.area());
       System.out.println("peremeter2 >> "+c2.perimeter());
       System.out.println("circumference2 >> "+c2.circumference());
    }
}
