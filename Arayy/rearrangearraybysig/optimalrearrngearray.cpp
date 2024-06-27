#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int arr[]={3,1,-2,-5,2,-4};
    int n=6;
    vector<int>v(n,0);
    int posindex=0,negindex=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
          v[negindex]=arr[i];
          negindex+=2;
        }
        else
        {
            v[posindex]=arr[i];
            posindex+=2;
        }
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    return 0;
}