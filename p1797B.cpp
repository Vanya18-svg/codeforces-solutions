#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<vector<int>>a(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        ll count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]!=a[n-i-1][n-j-1])
                count++;
            }
        }
        count/=2;
        if(count>k){
            cout<<"No"<<endl;
        }
        else{
            ll temp=k-count;
            if(temp%2==0){
                cout<<"Yes"<<endl;
            }
            else{
                if(n%2==0){
                    cout<<"No"<<endl;
                }
                else{
                    cout<<"Yes"<<endl;
                }
            }
        }
    }
    return 0;
}