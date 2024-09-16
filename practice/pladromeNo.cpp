#include<bits/stdc++.h>
using namespace std;

void palodrom(int n,int m,int t)
{  
    if(n==0)
    {
         if(t==m)
    {
        cout<<"no. is palodrom";
    }
    else 
    {
    cout<<"not";
    }
        return ;
    }
    int i =n%10;
     m =m*10 +i;
    palodrom(n/10,m,t);
   
}
int main()
{
   int n,m=0,t ;
   cout<<"enter a no.>>";
   cin>>n;
   t=n;
   palodrom(n,m,t);
    return 0;
}  

