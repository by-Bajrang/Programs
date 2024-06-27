#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1,2,3,4,5};
    int low=0,high=4;
    while(low<=high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    for(auto it:arr)
    {
        cout<<it<<" "; 
    }
    return 0;
}