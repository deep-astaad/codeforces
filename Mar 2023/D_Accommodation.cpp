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
int func_max(string s) {
	int n = s.size();
	int total = count(all(s), '1');
	int ans = 0, two = 0;
	for (int i = 1; i < n; ++i)
	{
		if ((s[i] == '1' && s[i - 1] == '0') || (s[i - 1] == '1' && s[i] == '0') || (s[i] == '0' && s[i - 1] == '0')) {
			two++;
			i++;
		}
	}
	if (two >= n / 4) {
		return total;
	}
	return total - (n / 4) + two;
}
int func_min(string s) {
	int n = s.size();
	int total = count(all(s), '1');
	int two = 0;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == '1' && s[i - 1] == '1') {
			i++;
			two++;
		}
	}
	return total - min(two, n / 4);
}
void solve()
{
	int n, m; cin >> n >> m;
	int mn = 0, mx = 0;
	for (int i = 0; i < n; ++i)
	{
		string s; cin >> s;
		mn += func_min(s);
		mx += func_max(s);
	}
	cout << mn << sp << mx << nn;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	// cin >> testcase;
	while (testcase--) solve();
	return 0;
}