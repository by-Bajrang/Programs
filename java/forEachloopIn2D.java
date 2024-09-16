public class forEachloopIn2D {
    
    public static void main(String[] args)
    {
        int A[][]={{1,2,3},{4,5,0},{6,7,9}};

        for(int x[]:A)//for row
        {
            for(int y:x)
            {
                System.out.print(y+" ");
            }
        }
    }
}
