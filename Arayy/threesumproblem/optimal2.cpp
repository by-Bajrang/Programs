#include<bits/stdc++.h>
using namespace std;


int main()
{
    // ***first sort the given v vector samza kya**
    vector<int>v={-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
    int n=v.size();


    vector<vector<int>>ans;
    for(int i=0;i<n;i++) 
    {
       if( v[i]==v[i-1]) continue;
       cout<<i<<" "<<endl;
       int j=i+1;
       int k=n-1;
       while(j<k)
       {
          int sum=v[i]+v[j]+v[k];
          if(sum<0)
          {
            j++;
          }
          else
          {
            if(sum>0)
            {
                k--;
            }
            else
            {
                vector<int>temp={v[i],v[j],v[k]};
                ans.push_back(temp);
                j++;
                k--;
                while( j<k && v[j]==v[j-1])   j++;
                while(j<k && v[k]==v[k-1])   k--;
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