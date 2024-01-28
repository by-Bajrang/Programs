#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr,int low,int high)
{
    int pivot=arr[low];
    int i= low;
    int j= high;
    while(i<j)
    {
        while(arr[i]<=pivot && i <=high-1)
        {
            i++;
        }
          while(arr[j]> pivot && j >=low+1)
        { 
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]); // for pivort swap
    return j;
}
void qs(vector<int>&arr,int low,int high){
    if(low<high)
    {
      int pindex =partition(arr,low,high);
      qs(arr,low,pindex-1);
      qs(arr,pindex + 1,high);  
    }
}
int main()  
{
    
    vector<int>arr={3,3,2,4,1,5,2,6,4};
    int low=0,high=8;
    qs(arr,low,high);  
    for (int i=0;i<9;i++)
    {
    cout<<arr[i]<<" "; 
    }  
}  