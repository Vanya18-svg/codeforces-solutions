#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin >> n >> k;
        vector<pair<long long,long long>> h_p(n);
        for (long long i = 0; i < n; ++i) {
            long long x;
            cin>>x;
            h_p[i] = {x, i + 1}; 
        }
        for(long long i = 0; i < n; ++i) {
            h_p[i].first=h_p[i].first%k;
            if(h_p[i].first==0) {
                h_p[i].first=k;
            }
        }
        sort(h_p.begin(),h_p.end(), [&](pair<long long,long long> a, pair<long long,long long> b) {
            if (a.first != b.first) {
                return a.first > b.first; 
            }
            return a.second < b.second; 
        } );
        for (const auto& p : h_p) {
            cout << p.second << " "; 
        }
        cout << "\n";
    }
    return 0;
}