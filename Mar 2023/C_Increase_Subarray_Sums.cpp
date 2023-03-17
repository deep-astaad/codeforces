/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define sp ' '
#define nn '\n'
#define nl cout<<'\n';
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/
void solve()
{
	int n, x; cin >> n >> x;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	vvll dp(n + 1, vll(n + 1, 0));
	for (int j = 1; j <= n; ++j)
	{
		dp[0][j] = max(0LL, dp[0][j - 1] + v[j - 1]);
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			dp[i][j] = max({0LL, dp[i - 1][j - 1] + v[j - 1] + x, dp[i][j - 1] + v[j - 1]});
		}
	}
	for (int i = 0; i <= n; ++i)
	{
		int ans = 0;
		for (int j = 0; j <= n; ++j)
		{
			ans = max(ans, dp[i][j]);
			// cout << dp[i][j] << sp;
		}
		cout << ans << sp;
		// cout << dp[i][n] << sp;
		// nl;
	}
	// nl;
}

int32_t main()
{
	deep_aman;
	int testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}