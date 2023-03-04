/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define all(x) (x).begin(), (x).end()
#define sp ' '
#define nn '\n'
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/
void solve()
{
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	sort(all(v));
	int i = 0, j = n / 2;
	int hidden = 0;
	while (i < n / 2 && j < n) {
		if (2 * v[i] <= v[j]) {
			hidden++;
			i++;
			j++;
		}
		else {
			j++;
		}
	}
	cout << n - hidden << nn;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	// cin >> testcase;
	while (testcase--) solve();
	return 0;
}