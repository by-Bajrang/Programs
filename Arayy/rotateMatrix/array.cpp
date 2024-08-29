#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 4;
    cout << "Enter a matrix:" << endl;
    // int matrix[n][n];
   int  matrix[n][n]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> matrix[i][j];
    //     } 
    // }
    

    // Transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i], matrix[i] + n);
    }

    // Print the matrix
    cout << "The rotated matrix is:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
