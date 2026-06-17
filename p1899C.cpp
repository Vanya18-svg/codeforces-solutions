#include<bits/stdc++.h>
using namespace std;
int parity(long long x){
    return abs(x)%2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> parity_array(n);
        for(int i=0;i<n;i++) parity_array[i]=parity(a[i]);
        vector<long long> sum(n);
        long long ans=a[0];
        sum[0]=a[0];
        for(int i=1;i<n;i++) {
            if(parity_array[i]!=parity_array[i-1]) {
                sum[i]=max(sum[i-1]+a[i], a[i]);
            } else {
                sum[i]=a[i];
            }
            ans=max(ans, sum[i]);   
        }
        cout<<ans<<"\n";
    }
    return 0;
}