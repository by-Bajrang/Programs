#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int>&v,int low,int high)
{
   int pivot=v[low];
   int i=low;
   int j=high;
   while(i<j)
   {
    while(v[i]<=pivot && i<=high-1)
    {
      i++;
    }
     while(v[j]>pivot && j>=low+1)
    {
      j--; 
    }
    if(i<j) swap(v[i],v[j]);
   }
   swap(v[low],v[j]);
   return j;
}
void qs(vector<int>&v,int low,int high)
{
    if(low<high)
    {
    int pivit=pivot(v,low,high);
    qs(v,low,pivit-1);
    qs(v,pivit+1,high);
    }
}
int main()
{
    vector<int>v={4,6,2,5,7,9,1,3};
    int low=0,high=7;
    qs(v,low,high);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    return 0;
}