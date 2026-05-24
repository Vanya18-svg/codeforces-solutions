#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a,b,c;
        cin >> a >> b >> c;
        if(c%2!=0){
            if(a>=b){
                cout << "First\n";
            }
            else{
                cout << "Second\n";
            }
        }
        else{
            if(a>b){
                cout << "First\n";
            }
            else if(b>=a){
                cout << "Second\n";
            }
        }
    }
    return 0;
}