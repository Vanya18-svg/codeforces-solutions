#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long ans;
    for(int i=0;i<n;i++){
        long long p,a,b;
        cin>>p>>a>>b;
        long long q=p/3;
        long long r=p%3;
        ans=min(r*a,b)+q*min(3*a,b);
        cout<<ans<<endl;
    }
    return 0;
}