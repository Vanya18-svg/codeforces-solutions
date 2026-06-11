#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
`
    vector<int> ans(n);
    int left = 0;

    while (left < n) {
        int right = left;
        
        // Move the right pointer to find the end of the current shoe-size block
        while (right < n && s[right] == s[left]) {
            right++;
        }

        // Element count in the current block
        int group_size = right - left;

        // If a shoe size is unique, it's impossible to shuffle
        if (group_size == 1) {
            cout << -1 << "\n";
            return;
        }

        // Apply cyclic shift for the current block (using 1-based indexing output)
        // Last student gets the first student's shoe
        ans[right - 1] = left + 1; 
        
        // Others get the next student's shoe
        for (int i = left; i < right - 1; i++) {
            ans[i] = i + 2;
        }

        // Slide the left pointer to the start of the next block
        left = right;
    }

    // Print the valid permutation
    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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