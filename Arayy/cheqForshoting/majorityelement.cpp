#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,2,3,3,1,2,2};
    int n=7;
    map<int,int>mpp;
    // nlogn
    for(int i=0;i<7;i++)
    {
        mpp[arr[i]]++;
    }
    // o(n)
    for(auto it:mpp)
    {
       if(it.second>n/2)
       cout<<it.first;
    }
    return 0;
}  