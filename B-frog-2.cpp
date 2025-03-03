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

    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }   
    vector<int> dp(n,1e9);
    dp[0] = 0;

    for(int i=0;i<n;i++){
        for(int j=1;j<=k;j++){
            if(i-j>=0) dp[i] = min(abs(v[i]-v[i-j]) + dp[i-j], dp[i]);
        }
    }

    cout<<dp[n-1];
    

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