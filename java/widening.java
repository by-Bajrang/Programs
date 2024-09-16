public class widening {
    public static void main(String arg[])
    {
        byte b=1;
        short s=120;
        int i=10;
        long l=10;
        float f=10;
        double d=10; 
        char   c=10;


        //b=s;  not allowed par app esko app kar sakthe hai by the help of narrowing
        b=(byte)s;// narrowing par esmai ek problem hai ke esmai ham bigger data ko small mai change karthe hai jse kuch data loss ho jata hai
        s=b;
        f=s;
        f=i;

        //for narrowing 
        System.out.println(b);

        i=(int)f;
        f=i;
        d=f;
        f=(float)d;


    }
}
