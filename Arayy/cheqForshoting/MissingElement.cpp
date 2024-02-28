#include<bits/stdc++.h>
using namespace std;


int main ()
{
    vector<int>A={1,2,4,5};
    int n=5;
    for(int i=1;i<=n;i++)
    {
        int flag=0;
        for(int j=0;j<A.size();j++)
        {
            if(A[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<<i<<" ";
    }
     return 0;
}