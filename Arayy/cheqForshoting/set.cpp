#include<bits/stdc++.h>
using namespace std ;


int main ()
{
    set<int>s={1,5,6,9};
    s.insert(7);
    for(auto it:s)
    {
        cout<<it<<" ";
    }
    auto vt=s.find(6);//declaration fo pointer
    cout<<*vt;
    return 0;
} 