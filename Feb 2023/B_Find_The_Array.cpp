/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define vll vector <ll>
#define pll pair <ll, ll>
#define vvll vector <vector <ll>>
#define vpll vector <pair <ll, ll>>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define sp " "
#define endl "\n"
#define nn "\n"
#define cyes cout << "YES" << nn;
#define cno cout << "NO" << nn;
#define nl cout << nn;
const ll mod = 1e9 + 7;
//	The greatest success comes from the freedom to fail   ~ Mark Zuckerberg
/*

*/

void solve()
{
	int n; cin >> n;
	vll v(n);
	int odd = 0;
	int even = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		if (i % 2) {
			odd += v[i];
		}
		else {
			even += v[i];
		}
	}
	int odd_diff = 0, even_diff = 0;
	for (int i = 0; i < n; ++i)
	{
		if (i % 2 == 0) {
			even_diff += abs(1 - v[i]);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (i % 2 == 1) {
			odd_diff += abs(1 - v[i]);
		}
	}
	if (even_diff < odd_diff) {
		for (int i = 0; i < n; ++i)
		{
			if (i % 2 == 1) {
				cout << v[i] << sp;
			}
			else {
				cout << 1 << sp;
			}
		}
	}
	else {
		for (int i = 0; i < n; ++i)
		{
			if (i % 2 == 0) {
				cout << v[i] << sp;
			}
			else {
				cout << 1 << sp;
			}
		}
	}
	nl;

}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}