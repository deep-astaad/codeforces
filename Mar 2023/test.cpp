/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

/*
count all possible ways when a dice is rolled for n times and
the GCD of the ith and (i+1)th roll must be 1, and if you get 1 then
the next two consecutive rolls cannot contain 1.
*/

void solve()
{
	int n; cin >> n;
	if (n == 1) {
		cout << 6 << '\n';
		return;
	}
	vector <vector <long long>> dp(6, vector <long long>(6, 0));
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 6; ++j) {
			if (i == 0 && j == 0) continue;
			else if (__gcd(i + 1, j + 1) == 1) dp[i][j] = 1;
		}
	}
	for (int i = 3; i <= n; ++i) {
		vector <vector <long long>> temp(6, vector <long long>(6, 0));
		for (int j = 0; j < 6; ++j) {
			for (int k = 0; k < 6; ++k) {
				int start = 1;
				if (j == 0 && k == 0) continue;
				if (j == 0 || k == 0) start = 2;
				for (int p = start; p <= 6; ++p) {
					if (__gcd(k + 1, p) == 1) temp[k][p - 1] += dp[j][k];
				}
			}
		}
		dp = temp;
	}
	int ans = 0;
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 6; ++j) {
			ans += dp[i][j];
			// cout << dp[i][j] << sp;
		}
		// nl;
	}
	cout << ans << '\n';
}

int32_t main()
{
	deep_aman;
	int testcase = 1; cin >> testcase;
	while (testcase--) solve();
	return 0;
}