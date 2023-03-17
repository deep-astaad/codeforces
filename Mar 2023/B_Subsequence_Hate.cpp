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
	string s; cin >> s;
	int n = s.size();
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		if (i == 0) v[i] = s[i] - '0';
		else {
			v[i] = v[i - 1];
			if (s[i] == '1') {
				v[i]++;
			}
		}
	}
	int ans = min(v[n - 1], n - v[n - 1]);
	for (int i = 0; i < n; ++i)
	{
		// zero then one
		int val1 = v[i] + (n - i - 1 - (v[n - 1] - v[i]));
		// one then zero
		int val2 = (i + 1 - v[i]) + (v[n - 1] - v[i]);
		ans = min({ans, val1, val2});
	}
	cout << ans << nn;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}