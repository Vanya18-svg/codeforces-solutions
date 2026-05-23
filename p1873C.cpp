#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        vector<vector<char>> a(10, vector<char>(10));
        int points = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> a[i][j];
                if (a[i][j] == 'X') {
                    int ring = min({i, j, 9 - i, 9 - j}) + 1;
                    points += ring;
                }
            }
        }
        cout << points << "\n";
    }
    return 0;
}
