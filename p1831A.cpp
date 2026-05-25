#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        long long x=n+1; //sum of max and min elements
        vector<long long> ans;
        for(int i=0;i<n;i++){
            ans.push_back(x-a[i]);
        }
        for(int i=0;i<n;i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}