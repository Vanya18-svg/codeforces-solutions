#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int count_neg=0,count_pos=0,op=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]<0) count_neg++;
            else count_pos++;

        }
        while(count_neg%2==1 || count_pos<count_neg){
            op++;
            count_neg--;
            count_pos++;
        }
        cout << op << "\n";
    }
    return 0;
}