#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, x;
    cin >> a >> b >> x;

    long long min_ops = abs(a - b); // Baseline: only use additions

    long long div_a_ops = 0;
    long long temp_a = a;

    // Loop through every possible division state of 'a'
    while (true) {
        long long div_b_ops = 0;
        long long temp_b = b;

        // For the current state of 'a', test every possible division state of 'b'
        while (true) {
            long long current_ops = div_a_ops + div_b_ops + abs(temp_a - temp_b);
            min_ops = min(min_ops, current_ops);

            if (temp_b == 0) break;
            temp_b /= x;
            div_b_ops++;
        }

        if (temp_a == 0) break;
        temp_a /= x;
        div_a_ops++;
    }

    cout << min_ops << "\n";
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