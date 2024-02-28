#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int arr[]={1,2,2,5,5,8,9,9,7,5};
    map<int,int>a;
    // for(auto it:arr)// this not work 
    // {
    //     a[arr[it]]++;
    // }
     for(int i=0;i<10;i++)
    {
        a[arr[i]]++;
    }
    int k;
    cout<<" enter a no.>>";
    cin>>k;
    while(k--)
     {
        int i;
        cin>>i;
        cout<<i<<"->"<<a[i]<<endl;
     }
     return 0;
}