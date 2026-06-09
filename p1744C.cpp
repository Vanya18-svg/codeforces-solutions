#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s = s + s;  // handle wrap-around

        vector<int> greens;
        for (int i = 0; i < 2 * n; i++) {
            if (s[i] == 'g') greens.push_back(i);
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                // binary search for next green >= i
                auto it = lower_bound(greens.begin(), greens.end(), i);
                ans = max(ans, *it - i);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}