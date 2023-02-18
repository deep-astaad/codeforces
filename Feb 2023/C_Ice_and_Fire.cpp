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
/*


*/

void solve()
{
	ll n; cin >> n;
	string s; cin >> s;
	bool flag0 = false, flag1 = false;
	ll prev = -1;
	for (int i = 0; i < n - 1; ++i)
	{
		if (s[i] == '0') {
			flag0 = true;
		}
		if (s[i] == '1') {
			flag1 = true;
		}

		if (flag1 == false || flag0 == false) {
			cout << 1 << sp;
			prev = 1;
		}
		else if (s[i] == s[i - 1]) {
			cout << prev << sp;
		}
		else {
			cout << i + 1 << sp;
			prev = i + 1;
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