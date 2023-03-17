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
	string s, t; cin >> s >> t;
	vll z(n, 0), o(n, 0);
	int idx = -1;
	for (int i = 0; i < n; ++i)
	{
		if (i == 0) {
			if (s[i] == '0')
				z[i]++;
			else
				o[i]++;
		}
		else {
			if (s[i] == '0') {
				z[i] = z[i - 1] + 1;
				o[i] = o[i - 1];
			}
			else {
				o[i] = o[i - 1] + 1;
				z[i] = z[i - 1];
			}
		}

		if (s[i] == t[i] && idx != i - 1) {
			cno;
			return;
		}
		else if (s[i] == t[i] && idx == i - 1) {
			idx = i;
		}
		else if (o[i] == z[i]) {
			if (idx == -1)
				idx = i;
			else if (o[idx] == z[idx])
				idx = i;
		}
	}
	if (idx == n - 1) {
		cyes;
	}
	else {
		cno;
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