/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	int n, m; cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m, 0));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j) cin >> v[i][j];
	}
	int ans = 0;
	for (int j = 0; j < m; ++j)
	{
		vector<int> t(n);
		for (int i = n - 1; i >= 0; --i) t[i] = v[i][j];
		sort(t.begin(), t.end());
		vector<int> tans(n, 0);
		int last = n - 1;
		for (int i = n - 2; i >= 0; --i)
		{
			if (t[i] == t[i + 1]) tans[i] = tans[i + 1];
			else {
				int dif = t[i + 1] - t[i];
				tans[i] = tans[i + 1] + dif * (n - i - 1);
			}
		}
		for (int i = 0; i < n; ++i)	ans += tans[i];
	}
	cout << ans << '\n';
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