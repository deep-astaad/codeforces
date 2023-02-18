// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define cyes cout<<"YES"<<"\n"
#define cno cout<<"NO"<<"\n"
#define sp " "
#define nn "\n"
#define nl cout<<nn;
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
//-------------------------------------------------------------------------------//
const ll M = 1e9 + 7;
/*



*/
ll digit_sum(ll n) {
    ll sm = 0;
    while (n) {
        sm += n % 10;
        n /= 10;
    }
    return sm;
}
void solve()
{
    ll n, q; cin >> n >> q;
    vll v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    vvll pre(4, vll (n));
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == 0) {
                pre[i][j] = v[j];
            }
            else {
                pre[i][j] = digit_sum(pre[i - 1][j]);
            }
        }
    }
    vll dp(n + 1);
    vll prefix;
    bool flag = false;
    while (q--) {
        ll x; cin >> x;
        if (x == 1) {
            flag = false;
            ll l, r; cin >> l >> r;
            l--;
            dp[l]++;
            dp[r]--;
        }
        else {
            ll idx; cin >> idx;
            idx--;
            if (flag == false) {
                prefix = dp;
                for (int i =  1; i <= n; ++i)
                {
                    prefix[i] = prefix[i - 1] + prefix[i];
                }
                flag = true;
            }
            prefix[idx] = min(3LL, prefix[idx]);
            cout << pre[prefix[idx]][idx] << nn;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testcase;
    testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}