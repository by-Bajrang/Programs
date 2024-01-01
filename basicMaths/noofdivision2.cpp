#include<bits/stdc++.h>
using namespace std;

Happy New Year 83
Happy New Year 84
Happy New Year 85
Happy New Year 86
Happy New Year 87
Happy New Year 88
Happy New Year 89
Happy New Year 90
Happy New Year 91
Happy New Year 92
Happy New Year 93
Happy New Year 94
Happy New Year 95
Happy New Year 96
Happy New Year 97
Happy New Year 98
Happy New Year 99
Happy New Year 100
Happy New Year 101


int main()
{
    int n=36; 
    vector<int> s1;// vector<int>1s is wrong kuki ek variable ka naam kabhi bhi digit se start nahi hota  
     //cin>>n;
     //for(int i=1;i<=sqrt(n);i++)//sqrt is mathmatical tool therefor it take time then use other things
     for(int i=1;i*i<=n;i++)
     {
        if(n%i==0)
        {
            s1.push_back(i);
            {
                if(n/i!=i)
                {
                    s1.push_back(n/i);
                }
            }
        } 
     } 
     sort(s1.begin(),s1.end());
     //for(auto it:s1)
     //{
     //   cout<<it<<" ";
     //} 
     for(auto t=s1.begin();t!=s1.end();t++)
     {
        cout<<*t<<" ";
     }
    return 0;
}