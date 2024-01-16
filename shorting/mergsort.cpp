#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low,int mid,int high)
{
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
             temp.push_back(arr[right]);
             right++;
        }
    }
    while(left<=mid)
    {
         temp.push_back(arr[left]);
            left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
             right++;
    }
     for(int i=low;i<=high;i++)
     {
        arr[i]=temp[i-low];
     }
}
void ms(vector<int>&arr,int low ,int high)
{
    if (low==high)return;
    int mid =(low+high)/2;
    ms(arr,low ,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main()
{ 

    vector<int>arr={3,1,2,4,1,5,2,6,4};
    int low=0,high=8;
    ms(arr,low,high);
    for (int i=0;i<9;i++)
    {
    cout<<arr[i]<<" "; 
    }
    return 0;
}  