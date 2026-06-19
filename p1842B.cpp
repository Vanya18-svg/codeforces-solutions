#include <bits/stdc++.h>
using namespace std;
bool solve() {
    int n, x;
    cin >> n >> x;
    vector<vector<int>> stacks(3, vector<int>(n));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            cin >> stacks[i][j];
        }
    }
    int current_knowledge = 0;
    if (current_knowledge == x) return true; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            if ((stacks[i][j] | x) == x) {
                current_knowledge |= stacks[i][j];
            } else {
                break; 
            }
        }
    }
    return current_knowledge == x;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        cout << (solve() ? "Yes\n" : "No\n");
    }
    return 0;
}