#include<bits/stdc++.h>
using namespace std;

vector<int> generaterow(int row)
{
    vector<int>ansrow;
    ansrow.push_back(1);
    long long ans=1;
    for(int col=1;col<row;col++)
    {
        ans=ans*(row-col);
        ans=ans/(col);
        ansrow.push_back(ans);
    }
    return ansrow; 
}
int main()
{
    int n;
    cout<<"enter a no.>>";
    cin>>n;
    vector<vector<int>>pascaltriangle;
    for(int i=1;i<=n;i++)
    {
        pascaltriangle.push_back(generaterow(i));
    }
    // ye sab galat tarika hai
    // for(auto it:pascaltriangle)
    // {
    //     cout<<it<<endl;
    // }
    // for(int i=0;i<pascaltriangle.size();i++)
    // {
    //     cout<<pascaltriangle[i]<<endl;
    // }
    for(int i=0;i<pascaltriangle.size();i++)
    {
        for(int j=0;j<pascaltriangle[i].size();j++)
        {
            cout<<pascaltriangle[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
} 