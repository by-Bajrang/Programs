#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v={-1,0,1,2,-1,4};
    int n=v.size();
    set<vector<int>>st;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                for(int l=j+1;l<n;l++)
                {
                    int sum= v[i]+v[j]+v[k]+v[l];
                    if(sum==0)
                    {
                        vector<int>temp={v[i],v[j],v[k],v[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
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