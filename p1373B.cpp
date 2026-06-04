#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count_1 = 0, count_0 = 0;
        for (char c : s)
        {
            if (c == '1')
                count_1++;
            else
                count_0++;
        }
        int ans = min(count_1, count_0);
        if (ans % 2 == 1)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }
    return 0;
}