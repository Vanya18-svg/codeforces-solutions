#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x,y,k;
        cin >> x >> y >> k;
        long long sticks_req=y*k+k-1;
        long long sticks_have=x-1;
        long long ans=0;
        ans+=(long long)ceil((double)sticks_req/sticks_have);
        ans+=k;
        cout << ans << "\n";
    }
    return 0;
}