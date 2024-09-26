class Subject
{
    private String subID;
    private String name;
    private int maxMarks;
    private int marksObtain;

    public Subject(String subID,String name,int maxMarks)
    {
        this.subID = subID;
        this.name = name;
        this.maxMarks = maxMarks; 

    }

    public String getSubID() 
    {
        return subID;
    }
    public String getName()
    {
        return name;
    }
    public int getmaxMarks()
    {
        return maxMarks;
    }
    public int getmarksObtain()
    {
        return marksObtain;
    }

    public void setmaxMarks(int mm)
    {
        maxMarks = mm;
    }
    public void setMarksObtain(int m)
    {
        marksObtain = m;
    }
}


public class setMarksObtain {
    
    public static void main(String[] args)
    {

    }
}
