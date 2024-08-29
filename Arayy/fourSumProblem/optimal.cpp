#include<bits/stdc++.h>
using namespace std;


int main()
{
    int target;
    cout<<"enter a target no.>>";
    cin>>target;
    vector<int>v={1,0,-1,-2,2,0};
    sort(v.begin(),v.end());
    int n=v.size();

    vector<vector<int>>ans;
    for(int i=0;i<n;i++)
    {
        if(i>0 && v[i]==v[i+1]) continue;
        for(int j=i+1;j<n;j++)
        {
            if(j!=i+1 && v[j]==v[j+1]) continue;
            int k=j+1;
            int l=n-1;
            while(k<l)
            {
            long long sum=v[i]; 
            sum+=v[j];
            sum+=v[k];
            sum+=v[l];
            if(sum==target)
            {
                vector<int>temp={v[i],v[j],v[k],v[l]};
                ans.push_back(temp);
                k++;
                l++;
                while(k<l && v[k]==v[k-1]) k++;
                while(k<l && v[l]==v[l-1]) l--;
            }
            else
            {
                if(sum<target) 
                {
                    k++;
                }
                else l--;
            }
            }
           
        }
    }

    for(const auto temp:ans)
    {
        for(int num:temp)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}