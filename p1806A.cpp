#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long y_diff = d - b;
        if (y_diff < 0) {
            cout << -1 << "\n"; // can't move down
            continue;
        }
        long long final_x = a + y_diff;
        if (c > final_x) {
            cout << -1 << "\n"; // can't move further right
            continue;
        }
        long long moves = y_diff + (final_x - c);
        cout << moves << "\n";
    }
    return 0;
}
