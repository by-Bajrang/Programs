#include<bits/stdc++.h>
using namespace std;

int main()
{
   int arr[]={7,1,5,3,6,4};
   int mini=arr[0],profit=0;
   for(int i=1;i<6;i++)
   {
     int cost=arr[i]-mini;
    profit=max(profit,cost);
    mini=min(mini,arr[i]);
   }
   cout<<mini<<endl<<profit;
   return 0;
}   