#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int n=4;
    cout<<"enter a matrix"<<endl;
    //declaration of 2D matrix
    // vector<vector<int>>matrix={{1,2,3,4},{5,6,7,8,},{9,10,11,12},{13,14,15,16}};
    vector<vector<int>>matrix;
    matrix={{1,2,3,4},{5,6,7,8,},{9,10,11,12},{13,14,15,16}};

    //sol  
    for (int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    //reverse
    for(int i=0;i<n;i++)
    {
        //row is matrix[i]
        reverse(matrix[i].begin(),matrix[i].end());
    }
    //print 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}