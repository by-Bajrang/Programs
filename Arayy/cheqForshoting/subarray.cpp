#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int m = 3;
    int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int lenth = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int s = 0;

            for (int k = i; k <= j; k++)
            {
                s += arr[k];
                //int lenth = 0;
            }
                if (s == m)
                {
                     lenth = max(lenth, j - i + 1);
                }
            
        }
    }
    cout << lenth;
    return 0;
}