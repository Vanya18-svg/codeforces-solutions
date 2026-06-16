#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<long long, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i; // Keep track of original index
    }

    // Step 1: Sort the fish by size
    sort(v.begin(), v.end());

    // Step 2: Build the prefix sums
    vector<long long> pre(n);
    pre[0] = v[0].first;
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + v[i].first;
    }

    vector<int> ans(n);
    
    // The biggest fish (at index n-1) can always eat all n-1 fish to its left
    ans[v[n - 1].second] = n - 1; 

    // Step 3: Work BACKWARD from the second-to-last fish
    for (int i = n - 2; i >= 0; i--) {
        // Can current fish eat the next fish?
        if (pre[i] >= v[i + 1].first) {
            // YES: It inherits the exact same total reach as the next fish
            ans[v[i].second] = ans[v[i + 1].second];
        } else {
            // NO: It's blocked. It can only eat the 'i' fish to its left
            ans[v[i].second] = i;
        }
    }

    // Step 4: Print results in original order
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
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