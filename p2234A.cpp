#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    // Sort the sequence in descending order
    sort(b.rbegin(), b.rend());

    // Validate if it follows the Euclidean sequence property
    bool possible = true;
    for (int i = 2; i < n; ++i) {
        // If the modulo condition fails, or if division by zero could occur (b[i-1] == 0)
        if (b[i-1] == 0 || b[i-2] % b[i-1] != b[i]) {
            possible = false;
            break;
        }
    }

    // Output the results
    if (possible) {
        cout << b[0] << " " << b[1] << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}