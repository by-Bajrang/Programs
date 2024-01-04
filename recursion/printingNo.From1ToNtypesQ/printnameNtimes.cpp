#include<bits/stdc++.h>
using namespace std;

void fun (int n,int i)
{
   if(i>n)
   return;
   cout<<"bajrang"<<i<<endl;
   fun(n,++i);
   //fun(n,i++);this goes to infinity there for it is wrong

}
int main()
{
    int n=3,i=1;
    // cout<<"enter a no.>>";
    //  cin>>n;
    fun(n,i);
    return 0;
}