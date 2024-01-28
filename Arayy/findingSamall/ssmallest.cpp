#include<bits/stdc++.h>
using namespace std ;

int main()
{
    vector<int>v={5,6,9,5,5,8};
    int smallest = v[0];
    int ssmallest = INT_MAX;
    for(int i=0;i<=5;i++)
    {
        if(v[i]<smallest)
        {
            ssmallest=smallest;
            smallest=v[i];
        }
        else if(v[i]>smallest && v[i]<ssmallest)
        {
            ssmallest=v[i];
        }
        
    }
    
    cout<<smallest<<endl;
    cout<<ssmallest;
}