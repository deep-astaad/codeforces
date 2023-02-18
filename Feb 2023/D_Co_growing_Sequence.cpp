/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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
/*
growing if ai & ai+1 = ai for all i
x array given
find y array such that (xi^yi) should be growing array

*/
ll calculate(int x, int y) {
	int i = 1, ans = 0;
	while (x) {
		int bitx = x & 1, bity = y & 1;
		if (bitx == 1 && bity == 0) {
			ans += i;
		}
		i = i << 1;
		x = x >> 1; y = y >> 1;
	}
	return ans;
}
void solve()
{
	int n; cin >> n;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	cout << 0 << sp;
	for (int i = 0; i < n - 1; ++i)
	{
		if ((v[i]&v[i + 1]) == v[i]) {
			cout << 0 << sp;
			continue;
		}
		ll val = calculate(v[i], v[i + 1]);
		cout << val << sp;
		v[i + 1] ^= val;
	}
	nl;
}

int32_t main()
{
	ios; ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}