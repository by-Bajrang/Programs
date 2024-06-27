#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=4,m=4;
    cout<<"enter matrix no.s";
   int matrix[n][m]; 
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cin>>matrix[i][j]; 
    }
   }


   //solution
   int col[m]={0};
   int row[n]={0};

   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        if(matrix[i][j]==0)
        {
            row[i]=1;
            col[j]=1;
        }
    }
   }
    
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        if(row[i]==1 || col[j]==1)
        {
            matrix[i][j]=0;
        }
    }
   } 

   //print out
    for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cout<<matrix[i][j]<<" "; 
    }
    cout<<endl;
   }
    return 0;
}