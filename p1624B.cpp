#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long a,b,c;
        cin >> a >> b >> c;
        long long new_a=2*b-c;
        long long new_b=(a+c)/2;
        long long new_c=2*b-a;
        if(new_a/a>0 && new_a%a==0){
            cout << "YES\n";
        } else if(new_b/b>0 && new_b%b==0 && (c-a)%2==0){
            cout << "YES\n";
        } else if(new_c/c>0 && new_c%c==0){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}