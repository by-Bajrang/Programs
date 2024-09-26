
class Rectangle
{
    private double length;
    private double breath;
 

    public double getLength()
    {
       return length;
    }
    public void setLength(double l)
    {
        if (l>=0)
       length = l;
       else length =  0;
    }
    public double getBreath()
    {
        return breath;
    }
    public void setBreath(double b)
    {
        if (b>=0)
        breath  = b;
        else breath = 0;
    }

    public double area()
    {
        // return length*breath;
        // or 
        return getLength()*getBreath();
    }

    public double perimeter()
    {
        return 2*(length+breath);
    }

    public boolean isSquare()
    {
        if (length == breath)
        return true;
        else 
          return false;
    }
}

public class RectangleTest {
    
    public static void main(String[] args)
    {
        Rectangle r = new Rectangle();
        r.setBreath(5);
        r.setLength(4);

        System.out.println("area >> "+r.area());
        System.out.println("perimeter >> "+r.perimeter());
        System.out.println("is is a square : "+r.isSquare());

        System.out.println("length >> "+r.getLength());
        System.out.println("breath >> "+r.getBreath());

    }
}
