#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        long long x;
        cin >> n >> x;
        vector<long long> a(n);
        long long max_sum=0,min_sum=0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            max_sum+=ceil((double)a[i]/x);
            min_sum+=a[i];
        }
        min_sum=ceil((double)min_sum/x);
        cout << min_sum << " " << max_sum << endl;
    }
    return 0;
}