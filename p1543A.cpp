#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >> a >> b;
        long long gcd=abs(a-b);
        if(gcd==0){
            cout << 0 << " " << 0 << endl;
            continue;
        }
        long long steps=min(a%gcd,gcd-a%gcd);
        cout << gcd << " " << steps << endl;
    }
    return 0;
}