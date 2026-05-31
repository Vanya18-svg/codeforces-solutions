#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long x, n;
        cin >> x >> n;
        if (n % 4 == 0) {
            n=0;
        } else if (n % 4 == 1) {
            n=-n;
        } else if (n % 4 == 2) {
            n=1;
        } else {
            n=n+1;
        } 
        if(x%2==0){
            cout<<x+n<<endl;
        } else {
            cout<<x-n<<endl;
        }
    }
    return 0;
}