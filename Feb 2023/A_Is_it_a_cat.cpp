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
	string s; cin >> s;
	if (s[0] != 'm' && s[0] != 'M') {
		cno;
		return;
	}
	char c = 'm';
	for (int i = 1; i < n; ++i)
	{
		s[i] = tolower(s[i]);
		if (s[i] != 'm' && s[i] != 'e' && s[i] != 'o' && s[i] != 'w') {
			cno;
			return;
		}
		if (s[i] == c) {
			continue;
		}
		else {
			if (c == 'm') {
				if (s[i] == 'e') {
					c = 'e';
				}
				else {
					cno;
					return;
				}
			}
			else if (c == 'e') {
				if (s[i] == 'o') {
					c = 'o';
				}
				else {
					cno;
					return;
				}
			}
			else if (c == 'o') {
				if (s[i] == 'w') {
					c = 'w';
				}
				else {
					cno;
					return;
				}
			}
			else {
				cno;
				return;
			}
		}
	}
	if (s[n - 1] == 'w' || s[n - 1] == 'W') {
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