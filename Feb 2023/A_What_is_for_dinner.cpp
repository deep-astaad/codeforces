// Code by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define vll vector <ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define pb push_back
#define ff first
#define ss second
#define cyes cout<<"YES"<<"\n"
#define cno cout<<"NO"<<"\n"
#define sp " "
#define nn "\n"
#define endl "\n"
#define nl cout<<nn;
//--------------------------------------------------------------------
const ll mod = 1e9 + 7;
/*


*/
void solve()
{
	ll n, m, k;
	cin >> n >> m >> k;
	map<ll, ll> mp;
	for (int i = 0; i < n; ++i)
	{
		ll x, y; cin >> x >> y;
		if (mp.find(x) != mp.end())
			mp[x] = min(y, mp[x]);
		else mp[x] = y;
	}
	ll sum = 0;
	for (auto it : mp) {
		sum += it.ss;
	}
	cout << min(sum, k) << nn;
}

int32_t main()
{
	ios;
	ll testcase;
	testcase = 1;
	// cin >> testcase;
	while (testcase--)
	{
		solve();
	}
	return 0;
}