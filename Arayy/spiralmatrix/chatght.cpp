#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<vector<int>> mat = {{1, 2, 3, 4, 5, 6},
                               {7, 8, 9, 10, 11, 12},
                               {13, 14, 15, 16, 17, 18},
                               {19, 20, 21, 22, 23, 24},
                               {25, 26, 27, 28, 29, 30},
                               {31, 32, 33, 34, 35, 36}};
    int n = mat.size();
    int m = mat[0].size();
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;
    vector<int> ans;

    while (top <= bottom && left <= right)
    {
        // Traverse from left to right.
        for (int i = left; i <= right; i++)
        {
            ans.push_back(mat[top][i]);
        }
        top++;

        // Traverse downwards.
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(mat[i][right]);
        }
        right--;

        // Make sure we are now on a different row.
        if (top <= bottom)
        {
            // Traverse from right to left.
            for (int i = right; i >= left; i--)
            {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        // Make sure we are now in a different column.
        if (left <= right)
        {
            // Traverse upwards.
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }

    // Print the ans vector in a single line
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
