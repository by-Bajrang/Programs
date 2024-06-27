#include<bits/stdc++.h>
using namespace std;

void merge (vector<int>&v,int low,int mid,int high)
{
    vector<int>t;
    int left=low;
    int right=(mid+1);
    while(left<=mid && right<=high)
    {
          if(v[left]<=v[right])
          {
          t.push_back(v[left]);
          left++;
          }
           else{
            t.push_back(v[right]);
            right++;
           }
    }
    while(left<=mid)
    {
        t.push_back(v[left]);
          left++;
    }
     while(right<=high)
    {
        t.push_back(v[right]);
          right++;
    }
    for(int i=low;i<=high;i++)
    {
        v[i]=t[i-low];
    }

}
void ms(vector<int>&v,int low ,int high)
{
    if(low==high)
    return;
    int mid=(low+high)/2;
    ms(v,low,mid);
    ms(v,mid+1,high);
    merge(v,low,mid,high);
}
int main()
{
    vector<int>v={4,6,2,5,7,9,1,3};
    int low=0, high=7;
    ms(v,low,high);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    return 0;
}