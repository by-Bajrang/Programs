#include <bits/stdc++.h>
using namespace std;

void something( int arr[],int n)   /// matlab array pass with adress automatically matlab adress pass karne ke jarurat nahi hai
{
    arr[0] += 100;
    cout << "value of 1st array>>" << arr[0] << endl;  
}
int main()
{ 
    int n = 5;
    int arr[n];
    cout<<"enter no.s>>>";
    for (in t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    something(arr,n);
    cout << "value of 1st array>>" << arr[0] << endl;
    return 0;
}