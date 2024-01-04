#include<bits/stdc++.h>
using namespace std;

void print(int n,int i)
{
    if(i>n)
    return;
    cout<<i<<" ";
    print(n,++i);

}
int main()
{
    int n,i=1;
    cout<<"enter a no.>>";
    cin>>n;
    print(n,i);
    return 0;
}
