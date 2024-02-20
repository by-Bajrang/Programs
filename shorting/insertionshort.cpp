#include <bits/stdc++.h>
using namespace std;

void insertion_short(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int t =      arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = t;
             j--;
             cout<<"run"<<" ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertion_short(arr, n);
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}  