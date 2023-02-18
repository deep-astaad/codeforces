// Code by : Aman Deep (deep_aman/astaad)
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
#define nl cout<<nn;
const ll mod = 1e9 + 7;
/*


*/

void solve()
{
	ll n; cin >> n;
	vvll v(n, vll(5));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cin >> v[i][j];
		}
	}
	int w = 0;
	for (int i = 0; i < n; ++i)
	{
		if (w == i) continue;
		int cnt = 0;
		for (int j = 0; j < 5; ++j)
		{
			if (v[w][j] < v[i][j]) cnt++;
		}
		if (cnt < 3) {
			w = i;
		}
	}
	int wins = 0;
	for (int i = 0; i < n; ++i)
	{
		int cnt = 0;
		if (i == w) continue;
		for (int j = 0; j < 5; ++j)
		{
			if (v[i][j] > v[w][j]) cnt++;
		}
		if (cnt >= 3) wins++;
	}
	if (wins == n - 1) cout << w + 1 << nn;
	else cout << -1 << nn;
}

int32_t main()
{
	ios; ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}