/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define ll long long
#define vll vector <long long>
#define pb push_back
#define endl '\n'
#define nn '\n'
#define nl cout << '\n';
const ll M = 1E6;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
vll primes;
void seive() {
	int n = sqrt(10000000);
	vector<int> v(n + 1);
	for (int i = 4; i <= n; i += 2) {
		v[i] = 1;
	}
	v[1] = 1;
	for (int i = 3; i <= n; i += 2) {
		if (v[i] == 0) {
			for (int j = i * i; j <= n; j += 2 * i) {
				v[j] = 1;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (v[i] == 0) {
			primes.pb(i);
		}
	}
}
void solve()
{
	int l, r; cin >> l >> r;
	int gcd = __gcd(l, r);
	int ans = LLONG_MAX;
	if (gcd > 1) {
		ans = 0;
	}
	else if (r - l == 1) {
		ans = -1;
	}
	else {
		int dif = r - l;
		for (auto prime : primes)
		{
			if (dif % prime == 0) {
				int steps = prime - (l % prime);
				ans = min(ans, steps);
			}
			while (dif % prime == 0) {
				dif /= prime;
			}
		}
		if (dif != 1) {
			ans = min(ans, dif - (l % dif));
		}
	}
	cout << ans << nn;
}

int32_t main()
{
	deep_aman;
	seive();
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}