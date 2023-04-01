/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE

int lw, num;

void getAns(int n) {
	int high = -1, low = 10, t = n;
	while (n) {
		high = max(high, n % 10);
		low = min(low, n % 10);
		n /= 10;
	}
	if (high - low > lw) {
		lw = high - low;
		num = t;
	}
}
void solve()
{
	num = -1; lw = LLONG_MIN;
	int l, r; cin >> l >> r;
	for (int i = l; i <= r; ++i)
	{
		if (lw == 9) break;
		getAns(i);
	}
	cout << num << '\n';
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