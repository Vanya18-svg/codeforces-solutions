#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long a,b,n;
        cin >> a >> b >> n;
        long long ans=b;
        vector<long long> arr(n);
        for(long long i=0;i<n;i++){
            cin >> arr[i];
            ans+=min(a-1,arr[i]);
        }
        cout<<ans<<endl;   
    }
    return 0;
}