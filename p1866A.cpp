#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    int min=INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(abs(a[i])<min)
        {
            min=abs(a[i]);
        }
    }
    cout << min << "\n";
    return 0;
}