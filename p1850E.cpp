#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll l=0, r=1e9, ans=-1;
        while(l<=r){
            ll mid=(l+r)/2;
            ll sum=0;
            for(int i=0;i<n;i++){
                sum+=pow((a[i]+2*mid),2);
                if(sum>c) break;
            }
            if(sum<=c){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        cout<<ans<<endl;
    }
return 0;
}