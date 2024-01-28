#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,3,5,6} ;
    int f=0;
    for(int i=0;i<=4;i++)
    {
       if( arr[i]<=arr[i+1])
        {
             //f++;
        }
        else cout<<"not shorted";
    }
    // if(f==5)
    // {
        cout<<"shorted";
    // }
    return 0;
}