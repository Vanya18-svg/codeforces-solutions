#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll c;
        cin>>n>>c;
        vector<ll>a(n);
        vector<ll>new_arr(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            new_arr[i]=a[i]+i+1;
        }
        sort(new_arr.begin(),new_arr.end());
        ll sum=0;
        int i;
        for(i=0;i<n;i++){
            sum+=new_arr[i];
            if(sum>c) break;
        }
        cout<<i<<endl;
    }
    return 0;
}