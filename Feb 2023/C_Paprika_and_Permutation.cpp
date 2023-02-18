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
	int n; cin >> n;
	vll v(n + 1), extra;
	for (int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		if (x <= n && v[x] == 0) {
			v[x]++;
		}
		else {
			extra.pb(x);
		}
	}
	sort(all(extra));
	vll missing;
	for (int i = 1; i < n + 1; ++i)
	{
		if (v[i] == 0) {
			missing.pb(i);
		}
	}
	// for (int i = 0; i < missing.size(); ++i)
	// {
	// 	cout << missing[i] << sp;
	// }
	// nl;
	// for (int i = 0; i < missing.size(); ++i)
	// {
	// 	cout << extra[i] << sp;
	// }
	for (int i = 0; i < missing.size(); ++i)
	{

		if (extra[i] < 2 * missing[i] + 1) {
			cout << -1 << nn;
			return;
		}
	}
	cout << missing.size() << nn;

}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}