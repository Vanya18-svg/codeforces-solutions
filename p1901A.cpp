#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> fuel(n);
        for(int i=0;i<n;i++){
            cin>>fuel[i];
        }
        int mini=fuel[0];
        for(int i=1;i<n;i++){
            mini=max(mini,fuel[i]-fuel[i-1]);    
        }
        mini=max(mini,(x-fuel[n-1])*2);
        cout<<mini<<endl;
    }
    return 0;
}