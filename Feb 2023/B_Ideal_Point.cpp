/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define vll vector <ll>
#define pll pair <ll, ll>
#define vvll vector <vector <ll>>
#define vpll vector <pair <ll, ll>>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define sp " "
#define endl "\n"
#define nn "\n"
#define cyes cout << "YES" << nn;
#define cno cout << "NO" << nn;
#define nl cout << nn;
const ll mod = 1e9 + 7;
/*


*/

void solve()
{
    ll n, k; cin >> n >> k;
    vvll v(n, vll(2));
    vll freq(50 + 5);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i][0] >> v[i][1];
        if (k >= v[i][0] && k <= v[i][1]) {
            freq[v[i][0]]++;
            freq[v[i][1] + 1]--;
        }
    }
    vll pre(50 + 5);
    for (int i = 1; i < 55; ++i)
    {
        pre[i] = pre[i - 1] + freq[i];
    }
    ll mx = LLONG_MIN;
    for (int i = 0; i < 55; ++i)
    {
        // cout << pre[i] << sp;
        if (i == k) {continue;}
        mx = max(mx, pre[i]);
    }
    // nl;
    if (mx < pre[k]) {
        cyes;
        return;
    }
    cno;

}

int32_t main()
{
    deep_aman;
    ll testcase = 1;
    cin >> testcase;
    while (testcase--) solve();
    return 0;
}