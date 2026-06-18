#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<int> a_sorted = a;
    sort(a_sorted.begin(), a_sorted.end());
    for (int i = 0; i < n; i++) {
        if (a_sorted[i] > b[i]) {
            cout << -1 << "\n";
            return;
        }
    }
    vector<int> P(n);
    vector<bool> used(n, false); 
    for (int i = 0; i < n; i++) {
        int choice = -1;
        for (int j = 0; j < n; j++) {
            if (!used[j] && b[j] >= a[i]) {
                choice = j;
                break;
            }
        }
        P[i] = choice;
        used[choice] = true;
    }
    int swaps = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (P[i] > P[j]) {
                swaps++;
            }
        }
    }    
    cout << swaps << "\n";
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