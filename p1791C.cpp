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
        string s;
        cin >> s;
        int i = 0, j = n - 1;
        while (i < j) {
            if(s[i]!=s[j]){
                n-=2;
                i++;
                j--;
            }
            else break;
        }
        cout << n << "\n";
    }
    return 0;
}