#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int>p={1,5};
    cout<<p.second<<endl;
    pair<int,pair<int,int>>k={1,{3,5}};
    cout<<k.second.second<<endl;
    pair<int,int> A[3]={{1,2},{3,4},{5,6}};
    cout<<A[2].first;
    
    return 0;
}