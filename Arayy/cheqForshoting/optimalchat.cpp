#include<bits/stdc++.h>
using namespace std;

vector<int> uniun(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> uniunarr;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            if (uniunarr.empty() || uniunarr.back() != a[i]) {
                uniunarr.push_back(a[i]);
            }
            i++;
        } else if (a[i] > b[j]) {
            if (uniunarr.empty() || uniunarr.back() != b[j]) {
                uniunarr.push_back(b[j]);
            }
            j++;
        } else {
            if (uniunarr.empty() || uniunarr.back() != a[i]) {
                uniunarr.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    // Copy the remaining elements of a and b
    while (i < n1) {
        if (uniunarr.empty() || uniunarr.back() != a[i]) {
            uniunarr.push_back(a[i]);
        }
        i++;
    }

    while (j < n2) {
        if (uniunarr.empty() || uniunarr.back() != b[j]) {
            uniunarr.push_back(b[j]);
        }
        j++;
    }

    return uniunarr;
}

int main() {
    vector<int> a = {1, 1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 4, 4, 5, 6};
    vector<int> c = uniun(a, b);
    for (auto it : c) {
        cout << it << " ";
    }
    return 0;
}
