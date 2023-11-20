#include <bits/stdc++.h>
using namespace std;

void something( int arr[])
{
    arr[0] += 100;
    cout << "value of 1st array>>" << arr[0] << endl;
}
int main()
{
    int n = 5;
    int arr[n];
    cout<<"enter no.s>>>";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    something(arr);
    cout << "value of 1st array>>" << arr[0] << endl;
    return 0;
} 