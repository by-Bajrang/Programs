#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v={-1,2,3,4,-3,1};
    int n=v.size();
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<n;i++)
    {
       if(v[i]>0)
       {
        pos.push_back(v[i]);
       }
       else
       {
        neg.push_back(v[i]);
       }
    }
    if(pos.size()>neg.size())
    {
    for(int i=0;i<neg.size();i++)
    {
        v[i*2]=pos[i];
        v[i*2+1]=neg[i];
    }
    int t=2*neg.size();
    for(int i=neg.size();i<pos.size();i++)
    {
        v[t]=pos[i];
        t++;
    }
    }
    else
    {
       for(int i=0;i<pos.size();i++)
    {
        v[i*2]=pos[i];
        v[i*2+1]=neg[i];
    }
    int t=2*pos.size();
    for(int i=pos.size();i<neg.size();i++)
    {
        v[t]=pos[i];
        t++;
    }  
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    return 0;
}