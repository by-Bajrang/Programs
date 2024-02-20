#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> A, vector<int> B)
{
    int n1 = A.size();
    int n2 = B.size();
    vector<int> C;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (A[i] == B[j])
        {
            C.push_back(A[i]);

            i++;
            j++;
        }
        else
        {
            if (A[i] < B[j])
            {
                i++;
            }
            else
                j++;
        }
    }

    return C;
}
int main()
{
    vector<int> A = {1, 2, 2, 3, 4, 5, 6};
    vector<int> B = {2, 2, 3, 3, 5, 6, 6, 7};
    vector<int> C = intersection(A, B);
    for (auto it : C)
    {
        cout << it << " ";
    }
    return 0;
}