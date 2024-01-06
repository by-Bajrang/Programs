#include<bits/stdc++.h>
using namespace std;


int fact(int n)
{
    if(n==1)//if(n==0)is also true
    return 1;
    return n*fact(n-1); 
}
int main ()
{
    int n=8;
    cout<<fact(n);
}