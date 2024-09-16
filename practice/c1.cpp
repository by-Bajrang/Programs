#include<bits/stdc++.h>
using namespace std;

void palindrom(int n, int m, int t)
{
    if (n == 0) {
        // After all recursion, we check if the original number t is equal to the reversed number m
        if (t == m) {
            cout << "The number is a palindrome";
        } else {
            cout << "The number is not a palindrome";
        }
        return;
    }
    
    int i = n % 10;
    m = m * 10 + i;
    // palindrom(n / 10, m, t);  // Recursion continues
}

int main()
{
    int n, m = 0, t;
    cout << "Enter a number: ";
    cin >> n;
    t = n;  // Store the original number
    palindrom(n, m, t);
    return 0;
}
