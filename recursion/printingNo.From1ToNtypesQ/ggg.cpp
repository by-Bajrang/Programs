#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int n=121,rev=0;
    cout<<"enter a no.";
    cin>>n;
    int k=n;
    while(n>0)
    {
     int r= n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(rev==k)
    cout<<"n is palindrop no.";
    else cout<<"not palindrop no.";
}