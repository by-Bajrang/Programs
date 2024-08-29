#include<bits/stdc++.h>
using namespace std;


int main()
{
    int r;
    cout<<"enter row>>"<<endl;
    cout<<1;
    cin>>r;
    int ans=1;
    for(int i=1;i<r;i++) 
    {
       ans=ans*(r-i);
       ans=ans/i;
       cout<<ans<<" ";
    }
    return 0;
}