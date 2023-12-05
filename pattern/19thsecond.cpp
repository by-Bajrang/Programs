#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"enter a no.>>";
    cin>>n;
    int insi=0;
    for(int i=0;i<n;i++)
    {
        // star
        for(int j=0;j<(n-i);j++)
        {
            cout<<"*";
        }
        
    
       //space
       for(int j=0;j<insi;j++)
       {
           cout<<" ";
       }
        // star
        for(int j=0;j<(n-i);j++)
        {
            cout<<"*";
        }
        insi+=2;
       cout<<endl;
    }
    insi=8;
    for(int i=1;i<=n;i++)
    {
        // star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        
    
       //space
       for(int j=1;j<=insi;j++)
       {
           cout<<" ";
       }
        // star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        insi-=2;
       cout<<endl;
    }
}