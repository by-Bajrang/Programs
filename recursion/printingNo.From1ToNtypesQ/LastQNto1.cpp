#include<bits/stdc++.h>
using namespace std;

void f(int i,int n)
{
    if(i>n)
    return ;
    f(i+1,n);
    cout<<i<<" ";
}
int main ()
{
    int n=4,i=1;
    f(i,n);
    return 0;    
}