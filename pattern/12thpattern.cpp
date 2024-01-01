#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"enter a no.";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        //number
        for(int j=1;j<=i;j++) 
        cout<<j;
        //space
        for(int j=1;j<=2*n-2*i;j++)
        cout<<" ";
        //number
        for(int j=i;j>=1;j--)  //####imp####
        cout<<j;
        cout<<endl;
    }
    return 0;
}