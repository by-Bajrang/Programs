
class student
{
    public long roll;
    public String name;
    public String course;
    public int m1,m2,m3;

    public int total()
    {
        return m1+m2+m3;
    }

    public float average()
    {
        return (float) total()/3;
    }

    public char grade()
    {
        if(average()>=60)
        return 'A';
        else return 'B';
    }

    public String toString()
    {
        return "rool no. >> "+roll+"\n"+"name >> "+name+"\n"+"course >> "+course;
    }

}

public class student1 {
    
    public static void main(String[] args)
    {
      student s = new student();
      s.roll = 2300901530013l;
      s.name = "bajrang";
      s.course = "btech";
      s.m1 = 70;
      s.m2 = 80;
      s.m3 = 65;

      System.out.println("total >> "+s.total());
      System.out.println("average >> "+s.average());
      System.out.println("details >> \n"+s);

    }
}
