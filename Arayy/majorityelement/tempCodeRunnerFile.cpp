#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=8;
   vector<int>v={1,1,1,3,3,2,2,2};
   set<int>s;
   unordered_map<int>mpp;
   for(int i=0;i<v.size();i++)
   {
     mpp[v[i]]++;
   }
   for(auto it:mpp)
   {
    if(it.second>(n/3))
    {
        s.insert(it.first);
    }
   }
   for(auto it:s)
   {
    cout<<it<<" ";
   }
   return 0;
}