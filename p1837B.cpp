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
        string s;
        cin >> s;
        int max_len=0,longest=1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1])
                longest++;
            else{
                max_len=max(max_len,longest);
                longest=1;
            }
        }
        max_len=max(max_len,longest);
        cout<< max_len+1 << "\n";
    }
    return 0;
}