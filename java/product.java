class product1
{
    private String itemNo;
    private String name;
    private double price;
    private double qty;
    
    public  product1()
    {
        itemNo="wachtes";
        name ="casio";
        price =1;
        qty = 1;
    }
    
    public product1(String s1,String s2,double p,double q)
    {
        itemNo = s1;
        name = s2;
        price =p;
        qty =q;

    }
}

public class product {
    
    public static void main(String[] args)
    {
       product1 p = new product1("ae1200wh","casio watch",2700,400);
    }
}
