#include<bits/stdc++.h>
using namespace std;
int  pivit(vector<int>&v,int low,int high)
{
    int i=low,j=high;
    int pivot=v[low];
    while(i<j) 
    {
        while(v[i]<=pivot && i<high)
        {
            i++;
        }
        while(v[j]>pivot && j>low)
        {
            j--;
        }
        if(i<j)swap(v[i],v[j]);
    }
    swap(v[low],v[j]);
    return j;
}
void qs(vector<int>&v,int low,int high)
{
    if(low<high)
    {
    int pivot=pivit(v,low,high);
    qs(v,low,pivot-1);
    qs(v,pivot+1,high);
    }
}
int main()
{
    vector<int>v={4,100,1,101,3,2,1,1};
    int low=0,high=8;
    qs(v,low,high);
     int n=v.size();
     int lastsmaller=INT_MIN;
     int cnt=0;
     int longest=1;
     for(int i=0;i<n;i++)
     {
        if(v[i]-1==lastsmaller)
        {
            cnt+=1;
            lastsmaller=v[i];
        }
        else{
            if(v[i]!=lastsmaller)
            {
                cnt=1;
                lastsmaller=v[i];
            }
        }
        longest=max(cnt,longest);
     }
//    for(auto it:v)
//    {
//     cout<<it<<" ";
//    }
   cout<<longest;
    return 0;
}  