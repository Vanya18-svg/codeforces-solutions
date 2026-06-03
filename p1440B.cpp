#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n,k;
        cin >> n >> k;
        vector<long long> a(n*k);
        for (int i = 0; i < n*k; i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        long long sum=0;
        int median_pos=n/2+1;
        int count=0;
        for (int i = n*k-median_pos; i >= 0; i-=median_pos) {
            sum+=a[i];
            count++;
            if(count==k) break;
        }
        cout << sum << endl;
    }
    return 0;
}