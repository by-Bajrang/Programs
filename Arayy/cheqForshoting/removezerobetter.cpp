#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1,0 ,2,3,2,0,0,4,5,1};
   int j=0;
   for(int i=0;i<10;i++)
   {
     if(arr[i]!=0)
     {
        arr[j]=arr[i];
        j++; 
     } 
   }
   for(int i=j;i<10;i++)
   {
    arr[i]=0;
   }
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    return 0;
} 