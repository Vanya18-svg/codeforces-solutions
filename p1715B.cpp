#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        long long max_sum=b*k+(k-1)*(n);
        long long min_sum=b*k;
        if(s<min_sum || s>max_sum){
            cout<<"-1"<<endl;
        }
        else{
            vector<long long> a(n,0);
            a[0]=b*k;
            s-=b*k;
            for(long long i=0;i<n;i++){
                long long add=min(s,k-1);
                a[i]+=add;
                s-=add;  
            }
            for(long long i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}