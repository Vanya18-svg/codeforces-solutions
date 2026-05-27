#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> cnt(26,0);
        for(int i=0;i<n;i++){
            cnt[s[i]-'a']++;
        }
        long long count_oddterms = 0;
        for(int i=0;i<26;i++){
            if(cnt[i]%2==1){
                count_oddterms+=cnt[i]%2;
            }
        }
        if(count_oddterms<=k+1){
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}