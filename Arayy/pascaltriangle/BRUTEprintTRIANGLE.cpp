#include<bits/stdc++.h>
using namespace std;

int fxn(int r,int c)
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
    int a=5;
    for(int r=1;r<=a;r++)
    {
        for(int c=1;c<=r;c++)
        {
            cout<<fxn(r-1,c-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}