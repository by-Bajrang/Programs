#include<bits/stdc++.h>
using namespace std;

int main ()
{
    map<string,int>mpp={
        {"bajrang",30},{"aman",69},{"rakesh",39}
    };
    cout<<mpp["aman"];
    auto ir=mpp.find(30);
    cout<<ir;
    return 0;
    
}