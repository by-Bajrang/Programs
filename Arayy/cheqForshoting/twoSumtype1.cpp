#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout<<"enter a no.>>";
    cin>>t;
    vector<int>a={2,6,5,8,11};
    int n=a.size();
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        int r= t-a[i];
        if(mpp.find(r)!=mpp.end())
        {
            cout<<"yes"<<endl;
            cout<<mpp[r]<<" "<<i;
            return 0;
        } 
        mpp[a[i]]=i;
    }
   cout<<"no";
}

