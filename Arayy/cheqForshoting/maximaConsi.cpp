#include<bits/stdc++.h>
usin g namespace std;


int main ()
{
    vector<int>v={1,1,0,1,1,1,0,1,1};
    int cnt=0;
    int maxi=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==1)
        {
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    cout<<maxi;
    return 0;

}
