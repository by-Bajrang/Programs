#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < 12; i++)
    {
        if (arr[i] == 0)
            cnt0++;
        else
        {
            if (arr[i] == 1)
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
    } 
    int index=0;
    for (int i = 0; i < cnt0; i++)
    {
        arr[index] = 0;
        index++;
    }
    for (int i = 0; i < cnt1; i++)
    {
        arr[index] = 1;
        index++;
    }
    for (int i = 0; i < cnt2; i++)
    {
        arr[index] = 2;
        index++;
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}