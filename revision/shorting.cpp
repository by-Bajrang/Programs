#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&v, int low, int mid, int high)
{
  vector<int> t;
  int right = (mid + 1);
  int left = low;
  while (left <= mid && right <= high)
  {
    if (v[left] <= v[right])
    {
      t.push_back(v[left]);
      left++;
    }
    else
    {
      t.push_back(v[right]);
      right++;
    }
  }
  while (left <= mid)
  {
    t.push_back(v[left]);
    left++;
  }
  while (right <= high) 
  {
    t.push_back(v[right]);
    right++; 
  }
  for (int i = low; i <= high; i++)
  {
    v[i] = t[i - low]; 
  }
}
void ms(vector<int>&v, int low, int high)
{
  if (low == high)
    return;
  int mid = (high + low) / 2;
  ms(v, low, mid);
  ms(v, mid + 1, high);
  merge(v, low, mid, high);
}
int main()
{
  vector<int> v = {3, 1, 2, 4, 1, 5, 6, 2, 4};
  int high = 8, low = 0;
  ms(v, low, high);
  for (auto it : v)
  {
    cout << it << " ";
  }

  return 0;
}