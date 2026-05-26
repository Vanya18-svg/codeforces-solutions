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
        int digits=0;
        int first_dig=0;
        int temp=n;
        while(temp>0){
            first_dig=temp%10;
            digits++;
            temp/=10;
       }
       int ans=first_dig+9*(digits-1);
       cout << ans << "\n";
    }
    return 0;
}