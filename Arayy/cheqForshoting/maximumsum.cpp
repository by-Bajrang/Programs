#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v={-2,-3,4,-1,-2,1,5,-3};
    int n=8,maxi=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+v[j];
             maxi=max(sum,maxi);
        }
    }
    cout<<maxi; 
    return 0;
}