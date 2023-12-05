#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n ;
    cout<<"enter a no.";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        { 
            char ch='A';
            ch=(ch+i);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
            return 0;


}