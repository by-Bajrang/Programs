#include<bits/stdc++.h>
using namespace std;

void fun(int cnt)
{
    if(cnt==3)
    {
      return;
    }
    cnt=cnt+1; 
    fun(cnt);
    cout<<cnt<<endl;
}
int main()
{
    int cnt=0;
    fun(cnt);
    return 0;
}
 