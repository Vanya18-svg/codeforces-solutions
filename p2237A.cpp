#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long final_sum = a[0];
    int prefix_min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > prefix_min) {
            // This tower can be reduced to the smallest element to its left
            final_sum += prefix_min;
        } else {
            // This tower is smaller or equal to the minimum seen so far, so it stays the same
            final_sum += a[i];
            prefix_min = a[i]; // Update the minimum
        }
    }

    cout << final_sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}