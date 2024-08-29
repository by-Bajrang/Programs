#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v={1,0,-1,-2,2,0};
    int n=v.size();
    int target;
    cout<<"enter a target no.>>";
    cin>>target; 

    set<vector<int>>st;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int fourth= target-(v[i]+v[j]+v[k]);
                if(s.find(fourth)!=s.end())
                {
                    vector<int>temp={v[i],v[j],v[k],fourth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                s.insert(v[k]);
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