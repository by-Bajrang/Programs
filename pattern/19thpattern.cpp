#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"enter a no.>>";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        // star
        for(int j=0;j<(n-i);j++)
        {
            cout<<"*";
        }
        
    
       //space
       for(int j=0;j<(2*i);j++)
       {
           cout<<" ";
       }
        // star
        for(int j=0;j<(n-i);j++)
        {
            cout<<"*";
        }
       cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        // star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        
    
       //space
       for(int j=1;j<=(2*(n-i));j++)
       {
           cout<<" ";
       }
        // star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
       cout<<endl;
    }
}