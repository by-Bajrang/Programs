#include<bits/stdc++.h>
using namespace std;

void fun(int cnt)
{
    if(cnt==3)
    {
      return;
    }
    cout<<cnt<<endl;
    cnt=cnt+1; 
    fun(cnt);
}
int main()
{
    int cnt=0;
    fun(cnt);
    return 0;
}