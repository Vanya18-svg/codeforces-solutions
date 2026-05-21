#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n; 
    vector<long long> a(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long max_so_far = a[0];
    long long required_k = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] < max_so_far) {
            required_k = max(required_k, max_so_far - a[i]);
        }
        max_so_far = max(max_so_far, a[i]);
    }

    if (required_k == 0) {
        cout << "YES\n";
        return;
    }

    max_so_far = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < max_so_far) {
            a[i] += required_k;
        }
        max_so_far = max(max_so_far, a[i]);
    }

    if (is_sorted(a.begin(), a.end())) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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