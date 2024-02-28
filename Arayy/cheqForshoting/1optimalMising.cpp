#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1,2,4,5};
    int sum1=5*(5+1)/2;
    int sum2=0;
    for(int i=0;i<(5-1);i++)
    {
        sum2=sum2+arr[i];
    }
    int a=sum1-sum2;
    cout<<a<<" "<<sum1<<" "<<sum2;
}