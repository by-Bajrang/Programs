#include <bits/stdc++.h>
using namespace std;

vector<int> inters(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    vector<int> c;
    int vis[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j] && vis[j] == 0)
            {
                c.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if (a[i] < b[j])
            {
                break;
            }
        }
    }
    return c;
}
int main()
{
    vector<int> a = {1, 1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 4, 4, 5, 6};
    vector<int> c = inters(a, b);
    for (auto ir : c)
    {
        cout << ir << " ";
    }
    return 0;
}