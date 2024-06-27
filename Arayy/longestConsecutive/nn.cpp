Your code aims to find the length of the longest consecutive subsequence in an array. However, there are a few issues that need fixing:

1. **Incorrect Access of Array Elements:** When using the `auto` keyword in the range-based for loop, it directly iterates over the elements of the array, but you are using it to index the array again, which is incorrect.

2. **Inserting Elements into Unordered Set:** In the loop `for(auto it:arr)`, the correct approach is to insert `it` into the set, not `arr[it]`.

3. **Printing the Longest Consecutive Subsequence Length:** The logic to determine the longest consecutive subsequence is generally correct but needs a minor adjustment to work correctly.

Here's the corrected code:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    unordered_set<int> s;
    
    // Insert array elements into the set
    for (auto it : arr) {
        s.insert(it); 
    }
    
    int longest = 1;
    
    // Find the longest consecutive sequence
    for (auto it : s) {
        // Check if it is the start of a sequence
        if (s.find(it - 1) == s.end()) {
            int cnt = 1;
            int x = it;
            // Count consecutive elements
            while (s.find(x + 1) != s.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    
    cout << longest;
    return 0;
}
```

This corrected code will correctly find and print the length of the longest consecutive subsequence in the given array.