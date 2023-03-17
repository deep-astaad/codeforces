/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define vll vector <long long>
#define pll pair <long long, long long>
#define vvll vector <vector <long long>>
#define vpll vector <pair <long long, long long>>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define sp ' '
#define endl '\n'
#define nn '\n'
#define cyes cout << "YES\n";
#define cno cout << "NO\n";
#define nl cout << '\n';
const ll mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/
void solve()
{
	int n; cin >> n;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int x = 0;
	for (int i = 1; i < n; ++i)
	{
		if (v[i] < v[i - 1]) {
			int val = (v[i] + v[i - 1]) / 2 + ((v[i] + v[i - 1]) % 2);
			x = max(x, val);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		v[i] = abs(v[i] - x);
	}
	bool z = true;
	for (int i = 1; i < n; ++i)
	{
		if (v[i] < v[i - 1]) {
			z = false;
			break;
		}
	}
	if (z) {
		cout << x << nn;
	}
	else {
		cout << -1 << nn;
	}
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}