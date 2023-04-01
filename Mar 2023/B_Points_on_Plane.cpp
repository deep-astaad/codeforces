/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define nn '\n'
void solve()
{
	int n; cin >> n;
	int x = sqrt(n);
	if (x * x >= n) {
		cout << x - 1 << nn;
	}
	else {
		cout << x << nn;
	}
}

int32_t main()
{
	deep_aman;
	int testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}