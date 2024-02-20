#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int num,t=0;
    cin>>num;
    int arr[]={6,7,8,4,1};
    for(int i=0;i<5;i++)
      {
        if(arr[i]==num)
         { cout<< i;
           t++;
         }
      }
          if(t==0)
           cout<< -1;

}