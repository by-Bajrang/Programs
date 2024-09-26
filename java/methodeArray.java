public class methodeArray {
    
    static void showlist(String ...s)
    {
        for(int i= 0; i<s.length;i++)
        {
            System.out.println(i+1+" "+s[i]);
        }
    }
    public static void main(String[] arg)
   {
    showlist("john","smith","Ajay","Ahmed");
   }
}
