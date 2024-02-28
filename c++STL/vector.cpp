#include<bits\stdc++.h>
using namespace std;


int main ()
{
    //vector<int> v={1,2,3,4,5};
    vector<int>v(3,5);
    //vector<int>v=(3,5); //this is wrong 
    v.push_back(4);
    v.push_back(45);                        
    // vector<int>::iterator it=v.begin(); 
     // or
    // auto it=v.begin();
     //it++;
     for(auto it=v.begin();it<v.end();it++)
     {
        cout<<*it<<" ";
     
     }
    //  cout<<*it<<endl;
    //  for(int i=0;i<5;i++)
    //  { 
    //  cout<<v[i]<<" "; 
    //  }
    //  cout<<v.back()<<endl;
    //  for(auto it:v)
    //  {
    //     cout<<it<<" ";
    //  }
    //  cout<<v.empty();
      
    // cout<<endl; 
}      