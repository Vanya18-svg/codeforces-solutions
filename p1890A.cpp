#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        unordered_map<long long,int> freq;
        for (auto x : a) freq[x]++;
        if (freq.size() == 1) {
            cout << "YES\n";
        } else if (freq.size() == 2) {
            auto it = freq.begin();
            int c1 = it->second; it++;
            int c2 = it->second;
            if (c1 >= n/2 && c2 >= n/2) cout << "YES\n";
            else cout << "NO\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
