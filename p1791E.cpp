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
        ll total=0,neg_count=0,min_val=LLONG_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            total+=abs(a[i]);
            min_val=min(min_val,abs(a[i]));
            if(a[i]<0) neg_count++;
        }
        if(neg_count%2==0){
            cout<<total<<endl;
        }
        else{
            total=total-2*min_val;
            cout<<total<<endl;       
        }
    }
    return 0;
}