#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1,1,2,2,3,3,4,4};
    set<int>s;
    for(int i=0;i<8;i++)
    {
        s.insert(arr[i]);
    }
    int index=0;
    for(auto it:s)
    {
        arr[index]=it;
        index++;
    }
    for(auto a:arr)
    {
        cout<<a<<" ";
    }
    return 0;
}