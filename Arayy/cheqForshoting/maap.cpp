#include<bits/stdc++.h>
using namespace std;

int main ()
{
    map<int,int >mpp={{1,4},{5,7},{4,8}};
    cout<<mpp[1];
    auto it= mpp.find(5);
    cout<<*(it).second;
    
}














