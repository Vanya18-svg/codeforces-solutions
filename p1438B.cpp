#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++)
            cin>>a[i];
        unordered_set<long long> s(a.begin(), a.end());
        if(s.size()<n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}