#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int arr[]={1,1,2,2,3,3};
    int i=0;
    for(int j=1;j<6;j++)
    {
        if(arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl<<i+1;
    return 0;
}