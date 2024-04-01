#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> mpp = {{1, 4}, {5, 7}, {4, 8}};
    
    // Accessing value using key directly
   // cout << mpp[1] << endl; // This prints the value associated with key 1

    // Using iterator to access value
    auto it = mpp.find(5);
    if (it != mpp.end()) {
        cout << it->second << endl; // Accessing the value using the iterator
    } else {
        cout << "Key 5 not found in the map." << endl;
    }

    return 0;
} 

