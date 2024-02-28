#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int arr[]={1,2,3,5,6,7,8,9};
    int hash[10]={0};
    for(int i=0;i<8;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=1;i<10;i++)
    {
        if(hash[i]==0)
        {
            cout<<i;
        }
    }
   
    return 0;
}