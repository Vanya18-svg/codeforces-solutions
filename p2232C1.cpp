#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, x, s;
        cin >> n >> x >> s;
        string u;
        cin >> u;
        vector<int> dp(x + 1, -1);
        dp[0] = 0;
        for (char c : u) { 
            for (int i = 0; i <= x; i++) {
                if (dp[i] == -1) continue;
                int seated = dp[i];
                int freeSeats = i * s - seated;
                if (c == 'I') {
                    if (i < x)
                        dp[i + 1] = max(dp[i + 1], seated + 1);
                }
                else if (c == 'E') {
                    if (freeSeats > 0)
                        dp[i] = max(dp[i], seated + 1);
                }
                else { 
                    if (i < x)
                        dp[i + 1] = max(dp[i + 1], seated + 1);
                    if (freeSeats > 0)
                        dp[i] = max(dp[i], seated + 1);
                }
            }
        }
        int ans = 0;
        for (int v : dp) 
        ans = max(ans, v);
        cout << ans << endl;
    }
    return 0;
}