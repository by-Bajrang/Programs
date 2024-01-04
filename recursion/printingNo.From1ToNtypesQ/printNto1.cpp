#include<bits/stdc++.h>
using namespace std;

void revp(int n,int i)
{
    if(i>n)
    return ;
    revp(n,i+1);//revp(n,++i);
    //then out is 4,3,2
    cout<<i<<" ";
}
int main ()
{
    int n=3,i=1;
    // cout<<"enter a no.";
    // cin>>n;
    revp(n,i);
    return 0;
}