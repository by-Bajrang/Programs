#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{ 
    if(n<=1)
    return n;
    // int last=fibo(n-1);
    // int slast=fibo(n-2);
    return (fibo(n-1)+fibo(n-2));
     
}
int main()
{ 
    int n;
    cout<<"enter a no.>>";
    cin>>n;
    cout<<fibo(n);
    return 0; 
} 