/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

void solve()
{
	int n; cin >> n;
	vector <long long> q(n), p(n);
	vector <long long> t(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> q[i] >> p[i];
		t[i] = p[i] * q[i];
	}
	int gcd = t[0];
	int cnt = 1;
	int lcm = p[0];
	for (int i = 1; i < n; ++i)
	{
		int tgcd = __gcd(gcd, t[i]);
		int tlcm = (lcm * p[i]) / __gcd(lcm, p[i]);
		if ( tgcd % tlcm == 0) {
			gcd = tgcd;
			lcm = tlcm;
		}
		else {
			cnt++;
			gcd = t[i];
			lcm = p[i];
		}
	}
	cout << cnt << '\n';
}

int32_t main()
{
	deep_aman;
	int testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}