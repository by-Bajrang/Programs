#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int n=123;
    int cnt=0;
    while(n>0)
    {
        //int nini=n%10;//es q ke liya es step ke jarurat nahi hai
        cnt=cnt+1;
        n=n/10;
    }
    cout<<cnt;
    return 0;
}