/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define vll vector <long long>
#define ss second
#define pb push_back
#define sp ' '
#define nn '\n'
#define nl cout << '\n';
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/
vll seive(1e6 + 1);
void seive_fun() {
	int n = 1e6 + 1;
	seive[1] = 1;
	for (int i = 4; i < n; i += 2)
	{
		seive[i] = 1;
	}
	for (int i = 3; i < n; i += 2)
	{
		for (int j = i * i; j < n; j += 2 * i)
		{
			seive[j] = 1;
		}
	}
}
void solve()
{
	int n, e; cin >> n >> e;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		if (seive[v[i]] == 0) {
			int j = i - e;
			int l = 0, r = 0;
			while (j >= 0) {
				if (v[j] == 1) {
					l++;
				}
				else {
					break;
				}
				j -= e;
			}
			j = i + e;
			while (j < n) {
				if (v[j] == 1) {
					r++;
				}
				else {
					break;
				}
				j += e;
			}
			ans += l * r + r + l;
		}
	}
	cout << ans << nn;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	seive_fun();
	while (testcase--) solve();
	return 0;
}