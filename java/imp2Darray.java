public class imp2Darray {
    
    public static void main(String[] args)
    {
        int A[][];
        A = new int[3][];
        A[0]=new int[5];
        A[1]= new int[3];
        A[2]= new int[2];

        for(int i=0;i<A.length;i++)
        {
            for(int j=0;j<A[i].length;j++)
            {
                System.out.print(A[i][j]+" ");
            }
            System.out.println("");
        }
         
        // for each loop
        for(int x[]:A)
        {
            for(int y:x)
            {
                System.out.print(y+" ");
            }
            System.out.println(" ");
        }
        
        

    }
}
