#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter a no.";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "not prime no.";
            exit(0);
        }
    }
    cout << n << " is prime no.";
    return 0;
}