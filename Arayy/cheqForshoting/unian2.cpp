#include <bits/stdc++.h>
using namespace std;

vector<int> uniun(int arr1[], int t, int arr2[], int p) 
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

    vector<int> unin;
    for (auto it : st)
    {
        unin.push_back(it);
    }
    return unin;
}

int main()
{
    int arr1[] = {1, 1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 4, 5, 6};
    vector<int> A = uniun(arr1, 6, arr2, 6);
    for (auto it : A)
    {
        cout << it << " ";
    }
    return 0;
}
