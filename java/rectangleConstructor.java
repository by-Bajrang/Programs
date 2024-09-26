import java.text.BreakIterator;

class rectangle
{
    private double length;
    private double breath;

    public rectangle()
    {
        length = 1;
        breath = 1;
    }

    public rectangle(double l,double b)
    {
    //    length = l;
    //    breath = b;
    //    if length is -ve 
       setLength(l);
       setBreath(b);
    }


    public double getLength()
    {
        return length;
    }
    public double getBreath()
    {
        return breath;
    }

    public void setLength(double l)
    {
        if(l>=0)
         length = l;
        else length = 0;
    }
    public void setBreath(double b)
    {
        if(b>=0)
        breath = b;
        else breath = 0;
    }
    public double area()
    {
        return length*breath;
    }

    public double perimeter()
    {
        return 2*(length+breath);
    }
}


public class rectangleConstructor {
    
    public static void main(String[] args)
    {
        rectangle r = new rectangle(-10,5);

        System.out.println("area >> "+r.area());
        System.out.println("perimeter >> "+r.perimeter());
    }
}
