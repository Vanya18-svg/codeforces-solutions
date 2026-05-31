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
        long long sum=0;
        int count_zero=0,count_one=0;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                count_zero++;
            } else if(a[i]==1){
                count_one++;
            }
        }
        sum=pow(2,count_zero)*count_one;
        cout<<sum<<endl;
    }
    return 0;
}