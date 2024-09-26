
class cylinder 
{
    public double radius;
    public double height;

    public double area()
    {
        return (2*(Math.PI*radius*radius)+2*Math.PI*radius*height);
    }
    public double volume()
    {
        return Math.PI*radius*radius*height;
    }
}

public class cylinder1 {
    
    public static void main(String[] args)
    {
        cylinder c1 =new cylinder();

        c1.radius = 7;
        c1.height = 10;

        System.out.println("TSA >> "+c1.area());
        System.out.println("VOLUME >> "+c1.volume());
    }
}
