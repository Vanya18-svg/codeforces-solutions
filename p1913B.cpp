#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       string s;
       cin >> s;
       int n=s.size();
       int count_of_0=0,count_of_1=0;
       for (int i = 0; i < n; i++)
       {
           if (s[i] == '0')
               count_of_0++;
           else
               count_of_1++;
       }
       int len_of_t=0;
       for(int i=0;i<n;i++){
        if(s[i]=='1'&& count_of_0>0){
            len_of_t++;
            count_of_0--;
        }
        else if(s[i]=='0'&& count_of_1>0){
            len_of_t++;
            count_of_1--;
        }
        else
            break;
       }
       cout << n - len_of_t << endl;
    }
    return 0;
}