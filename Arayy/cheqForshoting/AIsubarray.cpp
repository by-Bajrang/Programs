#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3,1,1,1,1,4,2,3};
    int k=3;
    long long sum = 0; // Initialize sum
    map<long long, int> presumMap; // Corrected map declaration
    int maxlen=0;
    for(int i=0;i<v.size();i++) // Corrected loop
    {
        sum+=v[i];
        if(sum==k)
        {
            maxlen= max(maxlen,i+1);
        }
        long long rem=sum-k;
        if(presumMap.find(rem)!=presumMap.end()) {
            int len = i - presumMap[rem];
            maxlen = max(maxlen,len);
        }
        if (presumMap.find(sum) == presumMap.end())
            presumMap[sum] = i;
    }
    cout<<maxlen;
}
