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
	vll l(26);
	vll u(26);
	for (int i = 0; i < n; ++i)
	{
		if (islower(s[i])) {
			l[s[i] - 'a']++;
		}
		else {
			u[s[i] - 'A']++;
		}
	}
	int tt = k;
	int ans = 0;
	for (int i = 0; i < 26; ++i)
	{
		ans += min(l[i], u[i]);
		if (tt) {
			int val = (max(l[i], u[i]) - min(l[i], u[i])) / 2;
			ans += min(val, tt);
			tt = max(tt - val, 0LL);
		}
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