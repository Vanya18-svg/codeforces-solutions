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
        int bs=0,ans=0;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==0) bs++;
            else bs=0;
            ans=max(ans,bs);
        }
        cout << ans << "\n";
    }
    return 0;
}