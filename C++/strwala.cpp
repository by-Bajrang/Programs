#include<bits/stdc++.h>
using namespace std;


int main ()
{
    string s="bajrang";
    int len=s.size();    //for length  
    cout<<"length>>"<< len;
    cout<<"\n"<< s[len-1];
    s[len-1]='z';
    cout<<"\n"<<s; 
    return 0;

}