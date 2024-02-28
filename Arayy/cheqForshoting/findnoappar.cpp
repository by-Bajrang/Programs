#include<bits/stdc++.h>
using namespace std;

int main ()
{
   int arr[]={1,1,2,3,3,4,4};
   int n=7;
   map<int,int>mpp;
   for(int i=0;i<n;i++)
   {
       mpp[arr[i]]++;
   } 
   for(auto it:mpp)
   {
    if(it.second==1)
    {
        cout<<it.first;
    }
   }
   return 0; 

}