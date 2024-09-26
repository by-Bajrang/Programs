public class methode1 {
   
      
    int max(int a,int b)
    //  static int max(int a,int b)
    {
        if(a>b)
        return a;
        else return b;
    }
    public static void main(String[] args)
    {
        int a = 10 , b = 5;
        methode1 mp = new methode1();
        System.out.println(mp.max(a,b));

    }
}
