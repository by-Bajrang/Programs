#include <bits/stdc++.h>
using namespace std;

vector<int> unionArrays(int arr1[], int n1, int arr2[], int n2)
{
    set<int> s;
    for (int i = 0; i < n1; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        s.insert(arr2[i]);
    }
    vector<int> result(s.begin(), s.end());
    return result;
}

int main()
{
    int arr1[] = {1, 1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 4, 5, 6};

    vector<int> result = unionArrays(arr1, 6, arr2, 6);

    for (auto it : result)
    {
        cout << it << " ";
    }

    return 0;
}
