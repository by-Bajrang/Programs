#include<bits/stdc++.h>
using namespace std ;

void something(string &s) //pass by refference
//void something(string s) //pass by value
{
    s[0]='t';
    cout<<s<<endl;
}


int main ()
{
    string s="raj";   
    something(s);     //esmai copy pass ke gayi hai***********
    cout<<s<<endl;
    return 0;
}