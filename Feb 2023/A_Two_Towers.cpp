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
    ll n, m; cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int ans = 0;
    char prev = a[0];
    for (int i = 1; i < n; ++i)
    {
        if (a[i] == prev) ans++;
        prev = a[i];
    }
    for (int i = m - 1; i >= 0; --i)
    {
        if (b[i] == prev) ans++;
        prev = b[i];
    }
    if (ans > 1) {
        cno;
        return;
    }
    cyes;
}

int32_t main()
{
    deep_aman;
    ll testcase = 1;
    cin >> testcase;
    while (testcase--) solve();
    return 0;
}