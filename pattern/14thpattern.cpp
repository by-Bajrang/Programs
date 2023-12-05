#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"enter a no.";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      
        
            for(char ch='A';ch<'A'+i;ch++)
            {
                cout<<ch;
            }
        cout<<endl;
    }
    return 0;
}