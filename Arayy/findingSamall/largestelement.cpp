#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int arr[]={1,2,6,8,9};
  int max =arr[0];
  for(int i=1;i<=4;i++)
  {
    if(arr[i]>max)
    {
        max=arr[i];
    }
  }
  cout<<max;
}