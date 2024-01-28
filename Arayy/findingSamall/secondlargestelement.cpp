#include<bits/stdc++.h>
using namespace std ;

int main()
{
    vector<int>v={5,6,9,5,5,8};
    int max =v[0],min=-1;
    for(int i=0;i<=5;i++)
    {
        if(max<v[i])
        {
            max=v[i];
        }
        
    }
    for(int i=0;i<=5;i++)
    {
        if(v[i]>max && v[i]!=max)
        {
            min=v[i];
        }
    }

    cout<<max<<endl;
    cout<<min;
}