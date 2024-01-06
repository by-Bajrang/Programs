#include<bits/stdc++.h>
using namespace std;

void fun(int i,int sum)
{
    if(i<0)
    {
        cout<<sum;
        return;
    }
    fun(i-1,sum+i);
}
int main()
{
    int n;
    cout<<"enter a no.>>";
    cin>>n;
    fun(n,0);
} 