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
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/
void solve()
{
	string s; cin >> s;
	int n = s.size();
	int flag = -1;
	int count = 0, ans = 0, q = 0;
	for (int i = 0; i < n; i++)
	{
		// cout << i << sp << count << sp << ans << sp << q << sp << flag << nn;
		if (flag == -1) {
			count++;
			if (s[i] == '0' || s[i] == '1') {
				flag = s[i] - '0';
			}
		}
		else {
			if (s[i] == '?') {
				count++;
				flag = !flag;
			}
			else if (s[i] - '0' == flag) {
				flag = s[i] - '0';
				ans += (count * (count + 1)) / 2;
				ans -= (q * (q + 1) / 2);
				count = q + 1;
				q = 0;
			}
			else {
				count++;
				flag = s[i] - '0';
			}
		}
		if (s[i] == '?') q++;
		else q = 0;
	}
	ans += (count * (count + 1)) / 2;
	// ans -= (q * (q + 1)) / 2;
	// if (q) ans++;
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