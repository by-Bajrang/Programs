#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    map<char,int>mpp;
    for(int i=0;i<s.size();i++)
    {
        mpp[s[i]]++;
    }
    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--)
    {
        char i;
        cin>>i;
        cout<<i<<">>"<<mpp[i]<<endl;
    }
    return 0;
}
