public class fxn2 {
    
    static void change(int x[],int y ,int z)
    {
        x[y]=z;
    }


    public static void main(String[] bj)
    {
        int  A[]={2,3,4,5,5};
        change(A,3,6);
        for(int x:A)
        {
            System.out.println(x);
        }
       
    }
}
