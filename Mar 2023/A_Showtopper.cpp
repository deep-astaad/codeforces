/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

void solve()
{
	int n; cin >> n;
	vector <long long> a(n);
	vector <long long> b(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 0; i < n; ++i)
		cin >> b[i];
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > b[i]) swap(a[i], b[i]);
	}
	sort(a.begin(), a.begin() + n - 1);
	sort(b.begin(), b.begin() + n - 1);
	if (n == 1 || (a[n - 1] >= a[n - 2] && b[n - 1] >= b[n - 2])) cout << "Yes\n";
	else cout << "No\n";
}

int32_t main()
{
	deep_aman;
	int testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}