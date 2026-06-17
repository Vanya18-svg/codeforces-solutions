#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    #ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
    #endif
	int t;
	cin >> t;
	while (t--){
        int n,k,s,e;
        cin>>n>>k>>s>>e;
        vector<ll>x(n+1),y(n+1);
        for(int i=1;i<=n;i++){
            cin>>x[i]>>y[i];
        }
        ll ans=abs(x[s]-x[e])+abs(y[s]-y[e]);
        ll min_s2m=1e17, min_t2m=1e17;
        for(int i=1;i<=k;i++){
            min_s2m=min(min_s2m,abs(x[s]-x[i])+abs(y[s]-y[i]));
            min_t2m=min(min_t2m,abs(x[e]-x[i])+abs(y[e]-y[i]));
        }
        ans=min(ans,min_s2m+min_t2m);
        cout<<ans<<endl;
    }
return 0;
}