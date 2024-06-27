#include<bits/stdc++.h>
using namespace std;


int main()
{
    map<int,int>mpp;
    mpp[1]=2;
    mpp[3]=4;
    mpp[5]=6;
    // mpp.insert({8,9});
    // cout<<mpp[8];
    // for(auto it:mpp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    auto it=mpp.find(5);
    cout << it->second;
    // cout<< *(it).second; ye kam nahi kar raha
    return 0;

}