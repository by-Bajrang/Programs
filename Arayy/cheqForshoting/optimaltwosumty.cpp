#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 6, 5, 8, 11};
    int t, i = 0, j =v.size()-1;
    cout << "enter a no.>>";
    cin >> t;
    while (i < j)
    {
        int left = v[i], right = v[j];
        if (left + right == t)
        {
            cout << "yes"<<endl;
            cout<<i<<" "<<j;
            return 0;
        }
        else
        {
            if (left + right < t)
            {
                i++;
            }
            else
                j--;
        }
    }
    cout << "no";
}