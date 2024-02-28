#include<bits/stdc++.h>
using namespace std;

int missing(vector<int>&v,int n)
{
    int xor1=0,xor2=0;
    for(int i=0;i<n-1;i++)
    {
        xor2=xor2^v[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;
    return xor1^xor2;
}
int main ()
{
    int n=5;
    vector<int>v={1,2,4,5};
    int ans=missing(v,n);
    cout<<ans;
    return 0;

}