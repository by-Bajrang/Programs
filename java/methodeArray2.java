public class methodeArray2 {
   static void showlist(int start,String ...s)
    {
        for(int i=0;i<s.length;i++)
        {
            System.out.println(start+" "+s[i]);
            start++;
        }
    }
    public static void main(String[] args)
    {
        showlist(5,"john","smith","Ahmed","mark");
    }
}
