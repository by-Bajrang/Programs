#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={3,1,-2,-5,2,-4};
    vector<int>positive;
    vector<int>negative;
    for(int i=0;i<6;i++)
    {
       if(arr[i]>0)
       {
        positive.push_back(arr[i]);
       }
       else
       {
        negative.push_back(arr[i]);
       }
    }
    for(int i=0;i<3;i++)
    {
        arr[i*2]=positive[i];
        arr[i*2+1]=negative[i];
    }  
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    return 0;
}