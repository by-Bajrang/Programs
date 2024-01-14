#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin>>n;
    string s[n];//eska matlab n string likh rahe ho
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    } 
    // string s;
    // cin>>s;
    map<char,int>mpp;//unordermap 
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<s[i].size(); j++){
            mpp[s[i][j]]++;
        }
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
