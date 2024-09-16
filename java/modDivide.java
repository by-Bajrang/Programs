public class modDivide {
    public static void main(String arg[])
    {
        int a=14,b=5;
        float c=(float)a/b;
        int r=a%b;
        System.out.println(c);
        System.out.println(r);

        float m=14.3f,n=3.2f;
        float k=m%n;
        System.out.println(k);

        float A=12.5f;
        long B=1231l;
        // float C=A*B; this is wrong because f*l==double
        double C=A*B;
        System.out.println(C);
        

    }
}
 
