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
	int n, k; cin >> n >> k;
	string s; cin >> s;
	string t; cin >> t;
	map<char, int> mp1, mp2;
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		mp1[s[i]]++;
		mp2[t[i]]++;
		if (s[i] == t[i]) {
			cnt++;
		}
	}
	if (mp1 != mp2) {
		cno;
		return;
	}
	for (int i = 0; i < n; ++i)
	{
		if (s[i] != t[i] && (i < k && (n - 1 - i) < k)) {
			cno;
			return;
		}
	}
	cyes;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}