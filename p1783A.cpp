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
        sort(a.begin(), a.end());
        long long max_el=a[n-1];
        long long min_el=a[0];
        if(max_el==min_el){
            cout<<"No"<<endl;
        } else {
            cout<<"Yes"<<endl;
            cout<<max_el;
            for(int i = 0; i < n-1; i++) cout<<" "<<a[i];
            cout<<endl;
        }
    }
    return 0;
}