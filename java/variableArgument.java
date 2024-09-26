public class variableArgument {
    static void show (int ...A)
        {
            for(int x:A)
            {
                System.out.println(x);
            }
        }
    public static void main(String[] bj)
    {
        show();
        show(10,20,30);
        
    }
}
