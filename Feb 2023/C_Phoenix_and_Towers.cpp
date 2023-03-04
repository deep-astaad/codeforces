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
//		The greatest success comes from the freedom to fail
//													 	   ~ Mark Zuckerberg
void solve()
{
	int n, m, x; cin >> n >> m >> x;
	vll h(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> h[i];
	}
	vll ans(n);
	vpll vp;
	for (int i = 0; i < n; ++i)
	{
		vp.pb({h[i], i});
	}
	sort(all(vp));
	for (int i = 0; i < n; ++i)
	{
		ans[vp[i].ss] = (i % m) + 1;
	}
	cyes;
	for (int i = 0; i < n; ++i)
	{
		cout << ans[i] << sp;
	}
	nl;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}