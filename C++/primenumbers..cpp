#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number.";
            exit(0);  // Providing exit status 0 (success)
        } 
    }

    cout << n << " is a prime number.";
    return 0;
}
