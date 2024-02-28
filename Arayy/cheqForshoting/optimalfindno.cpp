#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 4};
    int xorr = 0;
    for (int i = 0; i < 7; i++)
    {
        xorr = xorr ^ arr[i];
    }
    cout << xorr;
    //not xor because xor is inbuild fxn 
    return 0;
}
