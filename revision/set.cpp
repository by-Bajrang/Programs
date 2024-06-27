#include<bits/stdc++.h>
using namespace std;
// #include<bits/stdc++.h>
// using namespace std;


int main()
{ 
    set<int>st;
    st.insert(1);
    st.emplace(2);
    // st.push_back(2);
    //  st.push(2);
    // cout<<st[1];
    // upper three not working
    auto it=st.find(1);
    cout<<it;
    return 0;
}