/* Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define ll long long
#define vll vector <long long>
#define all(x) (x).begin(), (x).end()
#define vvll vector<vector<long long>>
#define pll pair<long long, long long>
#define vpll vector<pair<long long, long long>>
#define pb push_back
#define ff first
#define ss second
#define nl cout << '\n'
#define nn '\n'
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl '\n'
const int mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

#define TESTCASE
void solve()
{
	int n; cin>>n;
	map<int, vll> mp;
	for (int i = 0; i < n; ++i)
	{
		int a,b; cin>>a>>b;
		mp[a].pb(b);
	}

	int ans=0;
	for(auto it : mp)
	{
		sort(all(it.ss));
		reverse(all(it.ss));
		for (int i = 0; i<it.ff && i < it.ss.size(); ++i)
		{
			ans+=it.ss[i];
		}
	}
	cout<<ans<<nn;
}

int32_t main()
{
	deep_aman;
	int testcase = 1;
	#ifdef TESTCASE
		cin >> testcase;
	#endif
	while (testcase--) solve();
	return 0;
}