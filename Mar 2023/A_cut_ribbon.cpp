/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define vll vector <long long>
#define nn '\n'
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*
0 1 2 3 4 5
0 0 1 1
*/

void solve()
{
	int n, a, b, c; cin >> n >> a >> b >> c;
	vll v(n + 1);
	v[min({a, b, c})] = 1;
	v[0] = 1;
	for (int i = min({a, b, c}); i <= n; ++i)
	{
		int mx = 0;
		if (i - a >= 0) {
			if (i - a == 0) {
				mx = max(mx, 1LL);
			}
			else if (v[i - a] > 0) {
				mx = max(mx, v[i - a] + 1);
			}
		}
		if (i - b >= 0) {
			if (i - b == 0) {
				mx = max(mx, 1LL);
			}
			else if (v[i - b] > 0) {
				mx = max(mx, v[i - b] + 1);
			}
		}
		if (i - c >= 0) {
			if (i - c == 0) {
				mx = max(mx, 1LL);
			}
			else if (v[i - c] > 0) {
				mx = max(mx, v[i - c] + 1);
			}
		}
		v[i] = mx;
	}
	cout << v[n] << nn;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	// cin >> testcase;
	while (testcase--) solve();
	return 0;
}