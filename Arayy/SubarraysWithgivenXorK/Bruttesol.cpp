#include<bits/stdc++.h>
using namespace std;


int noOfXor(vector<int>v,int k)
{
    int cnt=0;
   for(int i=0;i<v.size();i++)
   {
    int xorr=0;
    for(int j=i;j<v.size();j++)
    {
       xorr=xorr^v[j]; 
       if(xorr==k)
       {
          cnt++;
       }
    } 
   }
   return cnt;
}
int main()
{
    vector<int>v={4,2,2,6,4};
    int k=6;
    int cnt=noOfXor(v,k);
    cout<<cnt;

    return 0;
}