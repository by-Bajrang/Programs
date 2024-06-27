#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v={2,1,5,4,3,0,0};
    int n=7;
   // 1st
    int index=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(v[i]<v[i+1])
        {
            index=i;
            break;
        }
    }
    if(index==-1)
    {
        reverse(v.begin(),v.end());
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        return 0;  
    }
    //2nd
    for(int i=n-1;i>=index;i--)
    {
        if(v[i]>v[index])
        {
            swap(v[i],v[index]);
            break;
        }
    }
    //3rd 
    reverse((v.begin()+index+1),v.end());

    for(auto it:v)
    {
        cout<<it<<" ";
    }
    return 0;
}