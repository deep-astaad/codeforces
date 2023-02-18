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
	vll v(n);
	int mn = LLONG_MAX;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		mn = min(v[i], mn);
	}
	// if (n == 1) {
	// 	cyes;
	// 	return;
	// }
	// else if (n == 2) {
	// 	if (v[0] <= v[1]) {
	// 		cyes;
	// 	}
	// 	else {
	// 		cno;
	// 	}
	// 	return;
	// }
	vll temp, index;
	for (int i = 0; i < n; ++i)
	{
		if (v[i] % mn == 0) {
			temp.pb(v[i]);
			index.pb(i);
		}
	}
	int m = temp.size();
	sort(all(temp));
	for (int i = 0; i < m; ++i)
	{
		v[index[i]] = temp[i];
	}
	for (int i = 0; i < n - 1; ++i)
	{
		// cout << v[i] << sp;
		if (v[i] > v[i + 1]) {
			cno;
			return;
		}
	}
	// nl;
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