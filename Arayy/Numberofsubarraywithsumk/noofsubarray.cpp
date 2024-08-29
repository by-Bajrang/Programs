#include<bits/stdc++.h>
using namespace std;


int main()
{
   vector<int>v={1,2,3,-3,1,1,1,4,2,-3};
   int k=3;
   map<int,int>mpp;
   mpp[0]=1;
    int presum=0,cnt=0;
    for(int i=0;i<v.size();i++)
    {
        presum+=v[i];
        int remove=presum-k;
        cnt+=mpp[remove];
        mpp[presum]+=1;
    }
    cout<<cnt;
    return 0;
}