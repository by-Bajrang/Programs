#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"enter a no.>>";
    cin>>n;
    int insi=2;
    for  (int i=1;i<=(2*n-1);i++)
    {
        //stars
        if(i<=n)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"*";
            }
        }
        else{
            for(int j=1;j<=(2*n-i);j++)
            {
                cout<<"*";
            }
        }
        //space
         if(i<=n)
        {
            for(int j=1;j<=(2*n-2*i);j++)
            {
                cout<<" ";
            }
        }
        else{
            for(int j=1;j<=insi;j++)
            {
                cout<<" ";
            }
                insi+=2;
        }
        //stars
         if(i<=n)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"*";
            }
        }
        else{
            for(int j=1;j<=(2*n-i);j++)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}