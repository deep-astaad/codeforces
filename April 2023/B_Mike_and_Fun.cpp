/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

int findAns(vector<int> &v){
    int mx=0;

    for(auto it : v)
        mx=max(mx,it);

    return mx;
}

void solve()
{
    int n,m,q; cin>>n>>m>>q;
    vector<vector<int>> v(n, vector<int> (m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin>>v[i][j];


    vector<int> dp(n,0);
    for (int i = 0; i < n; ++i) {
        int mx=0, temp=0;
        for (int j = 0; j < m; ++j) {
            if(v[i][j]==1) temp++;
            else mx=max(mx,temp), temp=0;
        }
        mx=max(temp,mx);
        dp[i]=mx;
    }


    while(q--){
        int x,y; cin>>x>>y;
        v[x-1][y-1] ^= 1;
        int mx=0, temp=0;
        for (int j = 0; j < m; ++j) {
            if(v[x-1][j]==1) temp++;
            else mx=max(mx,temp), temp=0;
        }
        mx=max(temp,mx);
        dp[x-1]=mx;
        cout<<findAns(dp)<<'\n';
    }

}

int32_t main()
{
    deep_aman;
    int testcase = 1;
    #ifdef TESTCASE
        cin >> testcase;
    #endif
    while (testcase--) solve();
    return 0;
}