#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v={10,22,12,3,0,6};
    vector<int>a;
    int n=v.size();
    int maxi=INT_MIN;
   //tc=o(n)
    for(int i=n-1;i>=1;i--)
    {
        if(v[i]>maxi)
        {
            maxi=v[i];
            a.push_back(v[i]);
        }
    } 
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    return 0;
}