#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<ll>a(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    ll max_gcd=LLONG_MIN;
    ll gcd_calc,removal=0;
    for(int i=0;i<n-1;i++){
        removal+=a[i];
        gcd_calc=__gcd(removal,sum-removal);
        max_gcd=max(max_gcd,gcd_calc);
    }
    cout<<max_gcd<<endl;
}
return 0;
}