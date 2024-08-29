#include<bits/stdc++.h>
using namespace std;

int NoOfXor(vector<int>&v,int k)
{
    int xr=0;
    int cnt=0;
    map<int,int>mpp;
    mpp[xr]++; //{0,1}

    for(int i=0;i<v.size();i++){
        xr=xr^v[i];
        int x=xr^k;

        cnt+=mpp[x];// ye akela nechie par bhari hai
        // if(mpp.find(x)!=mpp.end())
        // {
        //     cnt=cnt+mpp[x];
        // }
        mpp[xr]++;
    }
    return cnt;
}
int main()
{
    vector<int>v={4,2,2,6,4};
    int k=6;
    cout<<NoOfXor(v,k);
    
    return 0;
}