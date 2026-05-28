#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(long long i=0;i<n;i++){
            cin >> arr[i];
        }
        int max_len=1,longest=1;
        for(long long i=0;i<n-1;i++){
            for(long long j=i+1;j<n;j++){
                if(abs(arr[j]-arr[i])==j-i){
                    longest=j-i;
                }
                max_len=max(max_len,longest);
                longest=1;
            }
        }
        cout << max_len << "\n";
    }
    return 0;
}