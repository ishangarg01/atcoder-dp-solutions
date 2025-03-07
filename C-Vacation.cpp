#include <bits/stdc++.h>
using namespace std;

typedef int int_main;
#define int long long
const int M = 1e9 + 7;

void init_code()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> a(3, vector<int> (n,0));
    for(int i=0;i<n;i++){
        cin>>a[0][i]>>a[1][i]>>a[2][i];
    }

    vector<int> dp(3,0);
    dp[0] = a[0][0];
    dp[1] = a[1][0];
    dp[2] = a[2][0];

    for(int i=1;i<n;i++){
        int a1 = max(dp[1],dp[2]);
        int b1 = max(dp[0],dp[2]);
        int c1 = max(dp[1],dp[0]);
        dp[0] = a1 + a[0][i];
        dp[1] = b1 + a[1][i];
        dp[2] = c1 + a[2][i];
    }

    cout<<max(dp[0],max(dp[1],dp[2]));
}   


int_main main()
{
    init_code();
    int n = 1;
    // cin >> n;
    while (n--)
    {
        solve();
        cout<<endl;
    }
}