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
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }   

    int a = 0;
    int b = abs(v[1]-v[0]);
    int c = 0;

    if(n==1) {cout<<0;return;}
    if(n==2) {cout<<b;return;}

    for(int i=2;i<n;i++){
        c = min(abs(v[i]-v[i-2]) + a,  abs(v[i]-v[i-1])+b);
        a = b;
        b = c;
    }

    cout<<c;

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