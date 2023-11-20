#include<bits/stdc++.h>
using namespace std ;


void some(int &num)
{
    num+=5;
    num+=5;
    cout<<num<<endl;
}
int main()
{
    int num=10;
    some(num);
    cout<<num<<endl;
}