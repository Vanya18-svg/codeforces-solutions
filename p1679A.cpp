#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n<4 || n%2==1)
        cout<< -1 << "\n";
        else{
            long long max=0,min=0;
            max=n/4;
            min=ceil((double)n/6);
            cout << min << " " << max << "\n";
        }
    }
    return 0;
}