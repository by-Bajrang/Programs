#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int cnt=0;
    int el;
    for(int i=0;i<v.size();i++)
    {
        if(cnt==0)
        {
            cnt=1;
            el=v[i];
        }
        else
        {
            if(v[i]==el)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
    }
    int cnt1=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==el)
        cnt1++;
    }
    if(cnt1>(v.size()/2))
    cout<<el; 
    return 0;
}