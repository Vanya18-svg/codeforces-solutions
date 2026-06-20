#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + a[i];
    }
    long long max_sum = 0;
    for (int i = 0; i <= k; i++) {
        int left_deleted = 2 * i;
        int right_deleted = k - i;
        long long current_sum = pref[n - right_deleted] - pref[left_deleted];
        
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << "\n";
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