#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
	string s;
	cin >> s; 
	ll n = s.size(); 
	string double_s = s + s; 
	ll total_len = double_s.size();
	int maxi = 0; 
	int i = 0;
	while (i < total_len) { 
		if (double_s[i] == '0') { 
			i++;
			continue;
		}
		int j = i + 1;
		while (j < total_len && double_s[j] == '1') { 
			j++;
		}
		maxi = max(maxi, j - i); 
		i = j; 
    }
	if (maxi >= n) {
		cout << n * n << endl;
		return;
	}
	maxi++; 
	ll temp = (maxi + 1) / 2; 
	cout << (temp) * (maxi / 2) << endl; 
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

	int t = 1;
	cin >> t; // Read the number of test cases
	while (t--) {
		solve(); // Solve each test case
	}
}