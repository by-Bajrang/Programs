#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> v = {{1, 2}, {5, 4}};
    v.push_back({8,8});
    v.emplace_back(5,9);
    cout<<v[3].second<<endl;
    cout<<v[2].first<<endl;
    cout << v[1].second;
    return 0;
}