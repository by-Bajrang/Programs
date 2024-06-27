#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4, m = 4;
    cout << "enter matrix no.s";
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // solution

    //    int col[m]={0}; -> matrix[0][...]
    //    int row[n]={0}; -> matrix[...][0]
    int col0=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                // mark the i-th row
                matrix[i][0] = 0;
                // mark the ith col
                if(j!=0)
                {
                    matrix[0][j]=0;
                }
                else
                {
                    col0=0;
                }
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(matrix[i][j]!=0)
            {
                // chek row and coloumn
                if(matrix[0][j]==0 || matrix[i][0]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
    if(matrix[0][0]==0)
    {
        for(int j=0;j<m;j++) matrix[0][j]=0; 
    }
    if(col0==0)
    {
        for(int i=0;i<n;i++)
        {
            matrix[i][0]=0;
        }
    }


    //print
      for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cout<<matrix[i][j]<<" "; 
    }
    cout<<endl;
   }
    return 0;


    // tc=0(2nm)   
}