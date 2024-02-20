#include <bits/stdc++.h>
using namespace std;

void  uniun(int arr1[],int t,int arr2[],int p) 
{
    set<int>st;
    for(int i=0;i<t;i++)
    {
        st.insert(arr1[i]);
    }
    for(int i=0;i<p;i++)
    {
        st.insert(arr2[i]);
    }  
    int unin[st.size()];
    int i=0;
    for(auto it:st)
    { 
        unin[i++]=it;

    }
    //return unin;
    for(auto s:unin)
    {
        cout<<s<<" ";
    }
}
int main()
{
    int arr1[] = {1,1,2,3,4,5};
    int arr2[] = {2,3,4,4,5,6};
     uniun(arr1, 6,arr2,6);
    // for(auto it:unin)
    //{
    //    cout<<it<<" ";
    //}
    
    return 0; 
    

}