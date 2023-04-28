/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	int n, m, k; cin>>n>>m>>k;
	vector<int> b(k), g(k);
	for (int i = 0; i < k; ++i) 
		cin>>b[i];

	for (int i = 0; i < k; ++i) 
		cin>>g[i];

	map<int, set<int>> gp,bp;
	for (int i = 0; i < k; ++i){
		bp[b[i]].insert(g[i]);
		gp[g[i]].insert(b[i]);
	}

	int ans = k*k;
	for(auto it : bp) {
		for(auto x : it.second) {
			ans-=gp[x].size();
			ans-=it.second.size();
			if(gp[x].count(it.first)) ans++;
		}
	}
	cout<<ans/2<<'\n';
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