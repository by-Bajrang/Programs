#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int age;
    cout<<"enter your age = ";
    cin>>age;
    if(age>=18)
    {
        cout<<" you are an adult ";
    }
    else if(age<=10)
    {
        cout<<" you are not adult";
    }
    return 0;
}