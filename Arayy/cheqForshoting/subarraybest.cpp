#include <bits/stdc++.h>
using namespace std;

int main()
{
     vector<int>a = {1, 2, 3, 1, 1, 1, 3, 3};
    long long k = 5;
    int left = 0, right = 0;
    long long sum = a[0];
    int maxlen = 0;
    int n = a.size();
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }
        if (sum == k)
        {
            maxlen = max(maxlen, right - left + 1);
        }
        right++;
        if (right < n)
            sum += a[right];
    }
    cout << maxlen;
    return 0;
} 
