 #include<bits/stdc++.h>
 using namespace std;


 int main ()
 {
    int n;
    cout<<"enter a no.";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }   
        //no.
        char ch='A';
        int  breakpoint=((2*i+1)/2); //breakpoint for i=1 ,  is =1 kuki int hai and agar float bhi likhthe fir bhi 1 ata kuki float ke liya divide by 2.0 samja kya
        for(int j=0;j<(2*i+1);j++ )
        {
            cout<<ch;
           if(j<breakpoint)
            {
            ch++;
            }
            else{
                ch--;
            }


        }
        //space
         for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
 }