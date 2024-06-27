#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,1,2,2,3,3};
    int i=0,j=1;
    while(j<=5)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
            j++;
    }
     cout<<i;
      
    return 0;
}