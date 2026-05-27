#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        vector<long long> arr(n);
        for(long long i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        long long ans=1,count=1;
        for(long long i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1])<=k) 
            count++;
            else{
                count=1;
            }
            ans=max(ans,count);
        }
        cout << n-ans << "\n";
    }
    return 0;
}