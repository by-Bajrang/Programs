#include<bits/stdc++.h>
using namespace std;
// this is not proper correct made by bajrang yadav 

int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-2;i++) 
    {
        for(int j=0;j<=n-2-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
               int t=arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=t;
            }
        }
        cout<<"swap\n";
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}