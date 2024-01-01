#include<iostream>
using namespace std;

int main()
{
    int i = 0, j = 1, k;
    cout << i << " " << j << " "; // Print the first two terms of the series

    for (int count = 2; count <= 30; ++count) {
        k = i + j;
        cout << k << " ";

        i = j;
        j = k;
    }

    return 0;
}
