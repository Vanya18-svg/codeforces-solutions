#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> seen(26, false); 
    long long total_strings = 0;
    long long distinct_so_far = 0; 
    for (int i = 0; i < n; i++) {
        int char_index = s[i] - 'a'; 
        if (!seen[char_index]) {
            seen[char_index] = true;
            distinct_so_far++;
        }
        total_strings += distinct_so_far; 
    }
    cout << total_strings << "\n";
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