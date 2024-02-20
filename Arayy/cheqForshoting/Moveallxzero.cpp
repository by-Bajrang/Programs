#include <bits/stdc++.h>
using namespace std;
void move(int arr[], int t)
{
    int j = -1;
    for(int i = 0; i < t; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    // no non zero no.
    if (j == -1)
        return;
    for (int i = j + 1; i < t; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main()
{
    int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    move(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}