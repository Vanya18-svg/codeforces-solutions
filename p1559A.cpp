#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long result=a[0];
        for(int i=1;i<n;i++){
            result=result&a[i];
        }
        cout<<result<<endl;
    }
    return 0;
}