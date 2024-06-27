#include <bits/stdc++.h>
using namespace std;

int main()
{
  // #### introduction of vector####

  //  vector<int>v;
  //  v.push_back(9);
  //  v.emplace_back(3);
  //  cout<<v[0];
  // 2nd
  // vector<int>v(4,8);
  // v.push_back(5);
  // for(int i=0;i<5;i++)
  // {
  //   cout<<v[i]<<" ";
  // }

  // ###3rd for loop####

  //  vector<int>v={1,2,3,4};
  //  vector<int>::iterator a=v.begin();

  //  for(int i=0;i<4;i++)
  //  {
  //   cout<<*(a)<<" ";
  //   a++;
  //  }
  //  for(vector<int>::iterator a=v.begin();a!=v.end();a++)
  //  {
  //   cout<<*(a)<<" ";
  //  }
  //  for(auto a=v.begin();a!=v.end();a++)
  //  {
  //   cout<<*(a)<<endl;
  //  }
  //  for(auto it:v)
  //  {
  //   cout<<it<<" ";
  //  }

  // ###4th delet###

  //  vector<int>v={1,2,3,4};
  //  v.erase(v.begin()+1,v.begin()+3);
  //  for(auto it:v){
  //   cout<<it<<" ";
  //  }

  //  ## insert###

  vector<int> v = {1, 2, 3, 4};
  v.insert(v.begin(), 3);
  v.insert(v.begin(), 3, 9);
  for (auto it : v)
  {
    cout << it << " ";
  }
  auto a=v.begin();
  cout<<*(a);
 
  //  ## size of vector###
  cout << v.size() << endl;

  //  ##chek vector is empty or not###
  cout << v.empty();

  //  ## clear whole vector###
  v.clear();

  //  ## for swap the vector###
  // v1={10,20};
  // v2={30,40};
  // v1.swap(v2);

  return 0;
}