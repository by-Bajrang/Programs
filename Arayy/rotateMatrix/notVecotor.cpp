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
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    // reverse
    for(int i=0;i<n;i++)
    {
        //row is matrix[i]
        reverse(matrix[i],matrix[i]+n);
    }

    // for(int i=0;i<n/2;i++)
    // {
    //     for(int j=0;j<n/2;j++)
    //     int p1=0,p2=i;
    //     while(p1<p2)
    //     {
    //         swap(matrix[p1],matrix[p2]);
    //         p1++;
    //         p2--;
    //     }
    // }
    //print 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}