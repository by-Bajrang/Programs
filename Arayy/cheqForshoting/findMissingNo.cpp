#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2,4,5};
     int x=1;
     for(int i=0;i<4;i++)
     {
        if(x!=arr[i] )
        {
        cout<<x;
         break;
        }
        x++;
     } 
   
    return 0;
}