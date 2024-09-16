#include<bits/stdc++.h>
using namespace std;

int main()
{

    cout<<"enter first matrix>>row and column>>";
    int m,n1,n2,p;
    cin>>m>>n1;
    cout<<"enter 2nd matrix>>row and column>>";
    cin>>n2>>p;
    n1 =n2;

    cout<<"enter 1st matrix>>";
    int a[m][n1];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>a[i][j];
        }
    }
     cout<<"enter 2nd matrix>>";
    int b[n2][p];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<p;j++)
        {
            cin>>b[i][j];
        }
    }
    int c[m][p];
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        { 
           c[i][j]=0;
           for(int k=0;k<n1;k++)
           {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
           }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}