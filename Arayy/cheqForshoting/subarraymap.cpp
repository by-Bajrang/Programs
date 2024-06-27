#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int k = 3;
    long long sum = 0;
    map<long long, int> presumMap;
    int maxlen = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        // if(sum==k)
        // {
        //     maxlen=max(maxlen,i+1);
        // }
        // without bhi kaam karega lekin sum suru par hu tho nahi kam karega
        if (sum == k)
        {
            maxlen = max(maxlen, i + 1);
        }
        long long rem = sum - k;
        if (presumMap.find(rem) != presumMap.end())
        {
            int len = i - presumMap[rem];
            maxlen = max(maxlen, len);
        }
        if (presumMap.find(sum) == presumMap.end())
        {
            presumMap[sum] = i;
        }
    }
    cout << maxlen;
} 