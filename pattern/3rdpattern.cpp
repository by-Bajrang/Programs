#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int n;
    cout<<"enter a no.";
    cin>>n;
    for(int i=0;i<n;i++)    //agar 1 se start karna hai tho amd n thak chalana hai tho use for(int i=1;i<=n;i++ )
    {
        for( int j=0;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}