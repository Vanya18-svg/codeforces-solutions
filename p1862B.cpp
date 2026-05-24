#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int count=1;
        vector<long long> ans;
        ans.push_back(a[0]);
        for (int i = 1; i < n; i++) {
            if(a[i]>=a[i-1])
            {
                ans.push_back(a[i]);
                count++;
            }
            else
            {
                ans.push_back(a[i]);
                ans.push_back(a[i]);
                count+=2;    
            }
        }
        cout << count << "\n";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}