/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

void solve()
{
	int n, k; cin >> n >> k;
	int cnt = -1;
	for (int i = n; i > 0; --i)
	{
		if (k == 0) {
			cout << cnt-- << ' ';
		}
		else if (k >= i) {
			cout << ((i * (i + 1)) / 2) + 1 << ' ';
			k -= i;
		}
		else {
			cout << (k * (k - 1) / 2) + 1 << ' ';
			if ((k * (k - 1) / 2) + 1 == 1) {
				cnt = -2;
			}
			k = 0;
		}
	}
	cout << '\n';
}

int32_t main()
{
	deep_aman;
	int testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}