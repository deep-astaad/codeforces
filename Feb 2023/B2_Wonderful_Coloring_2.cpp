/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define vll vector <ll>
#define pll pair<ll,ll>
#define vvll vector<vll>
#define vpll vector<pll>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define cyes cout<<"YES"<<"\n";
#define cno cout<<"NO"<<"\n";
#define sp " "
#define nn "\n"
#define endl "\n"
#define nl cout << nn;
const ll mod = 1e9 + 7;

/*


*/

void solve()
{
	int n, k; cin >> n >> k;
	vll v(n);
	map<ll, vll> index;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		index[v[i]].pb(i);
	}
	// for (auto it : index)
	// {
	// 	cout << it.ff << " : ";
	// 	for (auto ite : it.ss)
	// 	{
	// 		cout << ite << sp;
	// 	}
	// 	nl;
	// }
	int maxColor = 0;
	for (auto it : index)
	{
		maxColor += min(k, 1LL * it.ss.size());
	}
	maxColor = (maxColor / k) * k;
	// cout << maxColor << nn;
	vll colors(n);
	int color = 1;
	for (auto it : index)
	{
		if (maxColor == 0) break;
		int cnt = 1;
		for (auto ite : it.ss)
		{
			if (cnt > k) break;
			if (maxColor == 0) break;
			// cout << it << sp;
			colors[ite] = color++;
			cnt++;
			maxColor--;
			if (color > k) {
				color = 1;
			}
		}
		if (color > k) color = 1;
		// color = 1;
		// nl;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << colors[i] << sp;
	}
	nl;
}

int32_t main()
{
	ios; ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}