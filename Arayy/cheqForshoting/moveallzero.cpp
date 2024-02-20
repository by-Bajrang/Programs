#include<bits/stdc++.h>
using namespace std;

move(int arr[],int t )
{
    vector<int>v;
    for(int i=0;i<t;i++)
    {

        if(arr[i]!=0){
            v.push_back(arr[i]);
            }
    }
    for(int i=0;i<v.size();i++)
    {
        arr[i]=v[i];
    }
    for(int i=v.size();i<t;i++)
    {
        arr[i]=0;
    }
         
}
int main ()
{
    int arr[]={1,0,2,3,2,0,0,4,5,1};
    int t=10;
    move(arr,t);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}