#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int arr[]={1,1,2,2,3,3,4,4,};
      set<int>s;
      for(int i=0;i<8;i++)
      { 
        s.insert(arr[i]);
      } 
       int index=0;
      for(auto it:s)
      {
        arr[index]=it;
        index ++;
      }
       for(int i=0;i<index;i++)
       {
        cout<<arr[i]<<" ";
       }
       cout<<endl<<index;
       cout<<arr[4];
       return 0;

}