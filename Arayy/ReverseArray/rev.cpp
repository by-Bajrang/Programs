#include<bits/stdc++.h>
using namespace std;
 void rev (int arr[],int l,int start,int end)
 {
    while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
 }
int main ()
{
    int arr[]={1,2,3,4,5};
    rev(arr,5,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}