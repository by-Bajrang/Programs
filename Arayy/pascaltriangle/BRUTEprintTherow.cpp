#include<bits/stdc++.h>
using namespace std;

int fxnNCR(int r,int c)
{
    int ans=1;
    for(int i=0;i<c;i++)
    {
        ans=ans*(r-i);
        ans=ans/(i+1);
    }
    return ans;
}
int main()
{
    int row;
    cout<<"enter a row";
    cin>>row;
    for(int c=1;c<=row;c++)
    {
        cout<<fxnNCR(row-1,c-1)<<" ";
    }
    return 0;
}