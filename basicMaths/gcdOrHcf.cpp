#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int n1,n2;
    // cout<<"enter two no.>>";
    cin>>n1>>n2;
    while(n1>0 && n2>0)
    {
        if(n1>n2)
        n1=n1%n2;
        else n2=n2%n1;   
    }
    if(n1==0)
    cout<<n2<<"is gcd or hcf";
    else cout<<n1<<" is gcd or hcf";
    return 0;
}
