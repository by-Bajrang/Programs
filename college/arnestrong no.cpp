#include<bits\stdc++.h>
using namespace std;

int main ()
{
    int n,r,sum=0,A;
    cout<<"enter  the no=";         
    cin>>n;
    A=n;
    while(n>0)
    {
        r=n%10;  
        sum=sum+(r*r*r);
        n=n/10;
      
    }
    if(A==sum)
    {
        cout<<"arnestrong no."<<endl;
    }
    else
    {
        cout<<"not arnestrong no."<<endl;
    }
    cout<<sum; 
    return 0;
}