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
// 	The greatest success comes from the freedom to fail
//								~ Mark Zuckerberg
void solve()
{
	ll n, m;
	cin >> n >> m;
	vvll v(n, vll(m));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> v[i][j];
		}
	}
	if ((n + m) % 2 == 0)
	{
		cno;
		return;
	}
	vvll dp_min(n, vll(m));
	vvll dp_max(n, vll(m));
	for (int j = 0; j < m; ++j)
	{
		if (j == 0) {
			dp_min[0][j] = v[0][j];
			dp_max[0][j] = v[0][j];
		}
		else {
			dp_min[0][j] = dp_min[0][j - 1] + v[0][j];
			dp_max[0][j] = dp_max[0][j - 1] + v[0][j];
		}
	}
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (j == 0) {
				dp_min[i][j] = v[i][j] + dp_min[i - 1][j];
				dp_max[i][j] = v[i][j] + dp_max[i - 1][j];
			}
			else {
				dp_min[i][j] = v[i][j] + min(dp_min[i - 1][j], dp_min[i][j - 1]);
				dp_max[i][j] = v[i][j] + max(dp_max[i - 1][j], dp_max[i][j - 1]);
			}
		}
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 0; j < m; ++j)
	// 	{
	// 		cout << dp_min[i][j] << sp;
	// 	}
	// 	nl;
	// }
	// nl;
	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 0; j < m; ++j)
	// 	{
	// 		cout << dp_max[i][j] << sp;
	// 	}
	// 	nl;
	// }
	if (dp_min[n - 1][m - 1] <= 0 && dp_max[n - 1][m - 1] >= 0) {
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