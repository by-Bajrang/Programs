#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter a no.>>";
    cin>>n;
    int arr[n];
    //  for(auto it:arr)// ye kam ku nahi kar raha 
    //  {
    //      cin>>it;
    //  }
    for(int s=0;s<n;s++)
    {
        cin>>arr[s];
    }
    int hash[100]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    int k;
    cout<<"enter a no.>>";
    cin>>k;
    while(k--)
    {
        int a;
        cin>>a;
        cout<<a<<"->"<< hash[a]<<endl;
    }
    
     return 0;
}