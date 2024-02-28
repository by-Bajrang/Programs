#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int m,n,sum=0;
    int arr1[3][4],arr2[4][2],result[3][2];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr1[i][j];
        }
        
    } 
    cout<<"for 2nd matrix";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr2[i][j];
        }
        
    } 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
              for(int k=0;k<4;k++)
              {
                sum+=arr1[i][k]*arr2[k][j];
              }
              result[i][j]=sum;
              sum=0;
        }
        
    } 
    for(int i=0;i<3;i++) 

    {
        for(int j=0;j<2;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
        
    } 
    return 0;
    
}