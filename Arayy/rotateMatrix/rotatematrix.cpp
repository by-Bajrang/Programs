#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int n=4;
    cout<<"enter a matrix";
    int matrix[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        { 
            cin>>matrix[i][j];
        }
    }

    //sol
    int sol[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sol[j][n-1-i]=matrix[i][j];
        }
    }

    //print 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}