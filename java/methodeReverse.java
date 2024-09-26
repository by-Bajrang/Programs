public class methodeReverse {
    int [] reverse (int A[])
    {
        int a = A.length;
        for(int i= 0 ;i<a ;i++)
        {
            int temp = A[i];
            A[i] = A[a-1-i];
            A[a-1-i] = temp;
        }
        return A;

    }
    
    public static void main(String[] args)
    {
        int reverse (int n)
        {
            int rev = 0;
            while(n>0)
            {
                int i = n%10;
                rev = rev*10 + i;
                n = n/10;
            }
            return rev;
        }

       
    }
}
