public class methode {
    
     int max(int a,int b)
    {
        if(a>b)
            return a;
         else return b;   
    }
    float max(float x,float y) 
    {
        if(x>y)
        return x;
        else return y;
    }
    public static void main(String[] args)
    {
        methode mp = new methode();// making object
        System.out.println(mp.max(2,4));
    }
}
 