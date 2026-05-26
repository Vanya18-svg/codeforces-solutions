#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        long long operations = 0;
        for(int i = 0; i < n - 1; i++){
            if(a[i]%2==a[i+1]%2){
                operations++;
            }
        }
        cout << operations << "\n";
    }
    return 0;
}