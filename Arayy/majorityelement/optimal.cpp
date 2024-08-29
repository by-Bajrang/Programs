#include<bits/stdc++.h>
using namespace std;


int main()
{
   vector<int>v={1,1,1,1,3,2,2,2};
   int n= v.size();
   vector<int>a;
   map<int,int>mpp;
   for(int i=0;i<n;i++)
   {
      mpp[v[i]]++;
      if(mpp[v[i]]==n/3)
      {
         a.push_back(v[i]);
      }
   }
   for(auto it:a)
   {
      cout<<it<<" ";
   }
}