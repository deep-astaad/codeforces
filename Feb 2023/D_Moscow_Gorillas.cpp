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
	int n; cin >> n;
	vll a(n), b(n);
	vll idx1(n + 1), idx2(n + 1);
	int i1 = -1, i2 = -1;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		idx1[a[i]] = i;
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
		idx2[b[i]] = i;
	}
	i1 = min(idx1[1], idx2[1]);
	i2 = max(idx1[1], idx2[1]);
	ll ans = i1 * (i1 + 1) / 2;
	ans += (n - 1 - i2) * (n - i2) / 2;
	ans += (i2 - i1 - 1) * (i2 - i1) / 2;
	for (int i = 2; i < n; ++i)
	{
		// cout << ans << nn;
		ll l = min(idx1[i], idx2[i]);
		ll r = max(idx1[i], idx2[i]);
		if (r <= i1) {
			ans += (n - i2) * (i1 - r);
		}
		else if (l >= i2) {
			ans += (i1 + 1) * (l - i2);
		}
		else if (l < i1 && r > i2) {
			// ans += (r - l - 1 - (2 * (i - 1))) * (r - l - (2 * (i - 1))) / 2;
			ans += (r - i2) * (i1 - l);
		}
		i1 = min(l, i1);
		i2 = max(r, i2);

	}
	cout << ans + 1 << nn;

}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	// cin >> testcase;
	while (testcase--) solve();
	return 0;
}