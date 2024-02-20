#include <bits/stdc++.h>
using namespace std;

void uniun(int arr1[], int t, int arr2[], int p, vector<int> &ans)
{
    set<int> st;
    for (int i = 0; i < t; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < p; i++)
    {
        st.insert(arr2[i]);
    }

    for (auto i : st)
    {
        ans.push_back(i);
    }
}
int main()
{
    int arr1[] = {1, 1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 4, 5, 6};

    int t = sizeof(arr1) / sizeof(arr1[0]);
    int p = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> ans;
    uniun(arr1, t, arr2, p, ans);
    for (auto i : ans)
    {
        cout << i << " ";
    }
}