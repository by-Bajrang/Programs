#include<bits/stdc++.h>
using namespace std;

int sum (int num1,int num2)     //take some thing return something
{
    int res=num1+num2;
    return res;
}



int main ()
{
    int num1,num2;
    cout<<"enter two no.>>>";
    cin>>num1>>num2;
    int res=sum(num1,num2);
    cout<<"sum of no.s is>>>"<<res;
    return 0;
}