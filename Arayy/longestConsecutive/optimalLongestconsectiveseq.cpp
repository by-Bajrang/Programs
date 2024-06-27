#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    unordered_set<int> s;
    for (auto it : arr)
    {
        s.insert(it);
    }
    int longest = 1;
    for (auto it : s)
    {
        if (s.find(it - 1) == s.end())
        {
            int cnt = 1;
            int x = it;
            while (s.find(x + 1) != s.end())
            {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    cout << longest;
    return 0;
}