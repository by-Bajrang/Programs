public class array {
   
    public static void main(String arg[])
    {
        int arr[] = new int[5];
        System.out.println(arr.length);
        int A[] = {1,2,3,4,5};
        A[2]= 5;
        System.out.println(A.length);
        System.out.println(A[4]);
        System.out.println(A[2]);

        // new method for declaration of array
        int C[];
        C = new int[5];

        // for each loop
        for(int i:C)
        {
            System.out.print(i+" ");
        }
        for(int i:C)
        {
            System.out.println(i++);// no change in with i++
        }

    }
}
