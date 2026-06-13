#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sum=0,min_val=INT_MAX,count_neg=0;
        cin>>n>>m;
        vector<vector<int>> a(n, vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                sum+=abs(a[i][j]);
                min_val=min(min_val, abs(a[i][j]));
                if(a[i][j]<0)
                    count_neg++;
            }
        }
        if(count_neg%2==0)
            cout<<sum<<endl;
        else
            cout<<sum-2*min_val<<endl;

    }
    return 0;
}