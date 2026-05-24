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
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        long long d=0;
        long long ans=INT64_MAX;
        for(int i=0;i<n-1;i++){
            if(a[i+1]>=a[i]){
                d=a[i+1]-a[i];
                ans=min(ans,(d/2 +1));
            }
            else ans=0;
        }
        cout << ans << "\n";
    }
    return 0;
}