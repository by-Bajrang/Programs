#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={3,7,7,5,2};
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=0 ;i<5;i++)
    {
        if(arr[i]<smallest)
        {
            ssmallest=smallest;
            smallest=arr[i];
        }
        else{
            if(arr[i]>smallest && arr[i]<ssmallest)
            {
                ssmallest=arr[i];
            }
        }
    }
    cout<<smallest<<endl;
    cout<<ssmallest;
    return 0;
}