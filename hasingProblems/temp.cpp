#include<bits/stdc++.h>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
     map<int,int> mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        // for(auto it:mp){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
     vector<int> ans(n,0);
     for(auto it:mp){
         
         ans[it.first-1]=it.second;
     }
     for(auto it:ans){
         cout<<it<<" ";
     }
     cout<<endl;
     return ans;
}
int main(){

//     6 16
// 7 1 16 2 2 13 
    vector<int> arr={7,1,16,2,2,13};
    countFrequency(6,16,arr);

return 0;
}