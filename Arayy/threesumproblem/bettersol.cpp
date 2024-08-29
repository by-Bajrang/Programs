#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v={-1,0,1,2,-1,-1,-4};
    int n=v.size();
    set<vector<int>>st;

    for(int i=0;i<n;i++)
    {
        set<int>hashset;
        for(int j=i+1;j<n;j++)
        {
            int third=-(v[i]+v[j]);
            if(hashset.find(third)!=hashset.end())
            {
                vector<int>temp={v[i],v[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(v[j]);
        }
    }


    for(const auto temp:st)
    {
        for(int num:temp)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
    
} 