#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={-1,0,1,2,-1,-4};
    int n=v.size();
    set<vector<int>>st;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(v[i]+v[j]+v[k]==0)
                {
                   vector<int>triplet={v[i],v[j],v[k]};
                   sort(triplet.begin(),triplet.end());
                   st.insert(triplet);
                }
            }
        }
    }
   
//    int a=st.size();
//    for(int i=0;i<a;i++)
//    {
//     cout<<st[i]<<endl;
//    }
     
   for(const auto triplet:st)
   {
    for(int num:triplet)
    {
        cout<<num<<" ";
    }
    cout<<endl;
   }
    return 0;
}