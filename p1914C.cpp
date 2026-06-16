#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int limit=min(n,k);
        int sum=0;
        int maxi=INT_MIN;
        int max_b=INT_MIN;
        for(int i = 0; i < limit; i++){
            sum+=a[i];
            max_b=max(max_b,b[i]);
            maxi=max(maxi,sum+((k-i-1)*max_b));
        }
        cout << maxi << endl;
    }
}