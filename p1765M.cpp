#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a,b;
        bool flag=false;
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                a=n/i;
                flag=true;
                break;
            }
        }
        if(flag){
            b=n-a;
            cout<<a<<" "<<b<<endl;
        }
         else{
            cout<<1<<" "<<n-1<<endl;
        }
    }
    return 0;
}