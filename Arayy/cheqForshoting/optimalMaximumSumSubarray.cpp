#include<bits/stdc++.h>
using namespace std;


int main ()
{
    vector<int>v={-2,-3,4,-1,-2,1,5,-3};
     int maxi=INT_MIN,sum=0;
     int start=-1,end=-1;
     for(int i=0; i<8;i++) 
     {
        if(sum==0)
        {
            start=i; 
        }
        sum+=v[i];

        if(sum>maxi)
        {
        maxi=sum;
        end=i;
        }
        if(sum<0)
        {
            sum=0;
        }
     }
     cout<<maxi<<endl<<start<<" "<<end;
    return 0;
}