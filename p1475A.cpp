#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        if(n%2!=0 && n>1) 
        cout << "YES" << endl;
        else{
            while(n%2==0) n/=2;
            if(n>1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}