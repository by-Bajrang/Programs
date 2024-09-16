public class printf {
    
    public static void main(String arg[])
    {
        int x=10;
        float y=12.444f;
        char z='A';

        System.out.printf("hello %d %f %c world\n",x,y,z);
        System.out.printf("hello %x %f %c world\n",x,y,z);

        String s="java program";
        System.out.printf("string is>> %s",s); 
    }
}
 