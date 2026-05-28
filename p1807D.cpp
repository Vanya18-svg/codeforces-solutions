#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        // prefix sums for fast range queries
        vector<long long> pref(n+1, 0);
        for (int i = 0; i < n; i++) pref[i+1] = pref[i] + arr[i];
        long long total = pref[n];
        while (q--) {
            int l, r;
            long long k;
            cin >> l >> r >> k;
            long long range_sum = pref[r] - pref[l-1];
            long long new_sum = total - range_sum + (r-l+1)*k;
            cout << (new_sum % 2 ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
