#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n,r;
  cout<<"enter n>> and r>>";
  cin>>n>>r;
  int N=n-1,R=r-1;
  long long res=1;
  for(int i=0;i<R;i++)
  {
    res=res*(N-i);
    res=res/(i+1);
  }  
  cout<<res;
    return 0;
}