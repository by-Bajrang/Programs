#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {2, 6, 5, 8, 11};
    int t, i = 0, j = v.size() - 1; // j should be the index of the last element in the vector
    cout << "Enter a number: ";
    cin >> t;

    while (i < j) {
        int left = v[i], right = v[j]; // Update left and right inside the loop
        if (left + right == t) {
            cout << "Yes";
            return 0;
        } else {
            if (left + right < t) {
                i++;
            } else {
                j--;
            }
        }
    }

    cout << "No";
    return 0;
}
