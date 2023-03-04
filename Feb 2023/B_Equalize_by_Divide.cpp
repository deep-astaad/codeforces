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
	int n; cin >> n;
	vll v(n);
	map<ll, vll> mp;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		mp[v[i]].pb(i + 1);
	}
	// for (auto it : mp)
	// {
	// 	cout << it.ff << ":";
	// 	for (auto itt : it.ss)
	// 	{
	// 		cout << itt << sp;
	// 	}
	// 	nl;
	// }
	vpll ans;
	// int cnt = 5;
	while (mp.size() > 1) {
		// if (cnt-- == 0) break;
		auto it = mp.begin();
		auto it2 = it;
		it2++;
		if (it->ff == 1) {
			cout << -1 << nn;
			return;
		}
		int val = (it2->ff) / (it->ff);
		if ((it2->ff) % (it->ff)) val++;
		for (auto i : it2->ss)
		{
			// for (int i = 0; i < vec.size(); i++)
			// {
			ans.pb({i, it->ss[0]});
			mp[val].pb(i);
			// }
		}
		mp.erase(it2);
	}
	// for (auto it : mp)
	// {
	// 	cout << it.ff << ":";
	// 	for (auto i : it.ss)
	// 	{
	// 		cout << i << sp;
	// 	}
	// 	nl;
	// }
	if (ans.size() == 0) {
		cout << 0 << nn;
		return;
	}
	cout << ans.size() << nn;
	for (auto it : ans)
	{
		cout << it.ff << sp << it.ss << nn;
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