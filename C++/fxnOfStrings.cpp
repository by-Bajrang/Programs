#include <bits/stdc++.h>
using namespace std;

int main()
{
    
     string s;
    //cin>>s;
    getline(cin,s);
     cout<<"orignal value>>"<<s;
     s.push_back('x');
     cout<<"\n"<< "modifiy valu>>"<<s;
     s.pop_back();
     cout<<"\n"<<"pop back value>>"<< s;


   
}