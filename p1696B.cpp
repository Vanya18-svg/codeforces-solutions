#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,count_zeroes=0;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==0){
                count_zeroes++;
            }
        }
        bool found_zero=false;
        int left=0,right=n-1;
        while(left<n && arr[left]==0){
            left++;
        }
        while(right>=0 && arr[right]==0){
            right--;
        }
        for(int i=left;i<=right;i++){
            if(arr[i]==0){
                found_zero=true;
                break;
            }
        }
        if(count_zeroes==n){
            cout << "0\n";
        }
        else if(found_zero){
            cout << "2\n";
        }
        else{
            cout << "1\n";
        }
        
    }
    return 0;
}