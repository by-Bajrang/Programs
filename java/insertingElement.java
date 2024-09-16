import java.util.Scanner;
public class insertingElement {
    
    public static void main(String[] arg)
    {
        Scanner s = new Scanner(System.in);
        System.out.println("enter index>>");
        int i = s.nextInt();
        int j = 5;
        int arr[]= {1,2,3,4,5};
        for(int n =arr.length-1;n>i;n--)
        {
           arr[n]=arr[n-1];
        }
        arr[i]=j;
        for(int k=0;k<arr.length;k++)
        {
            System.out.print(arr[k]+"  ");
        }
    }
}
