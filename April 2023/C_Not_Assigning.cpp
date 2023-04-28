/* Code by : Aman Deep (deep_aman) */
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
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl '\n'
const int mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

void visit(vvll &adj, int node, int root, int prev, map<pll, int> &ans){

	bool flag=true;
	for(auto it : adj[node])
	{
		if(it!=root){
			if(prev==-1){
				if(flag){ 
					ans[{node, it}]=2;
					ans[{it, node}]=2;
					visit(adj, it, node, 2, ans);
					flag=false;
				}
				else{ 
					ans[{node,it}]=3;
					ans[{it, node}]=3;
					visit(adj, it, node, 3, ans);
				}
			}
			else if(prev==2){
				ans[{node, it}]=3;
				ans[{it, node}]=3;
				visit(adj, it, node, 3, ans);
			}
			else{
				ans[{node, it}]=2;
				ans[{it, node}]=2;
				visit(adj, it, node, 2, ans);	
			}
		}
	}
}

#define TESTCASE
void solve()
{
	int n; cin>>n;
	vvll adj(n+1);
	map<int, pair<int,int>> mp;
	for (int i = 0; i < n-1; ++i) {
		int u,v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		mp[i+1]={u,v};
	}

	for (int i = 1; i <= n; ++i) {
		if(adj[i].size()>2){
			cout<<-1<<endl;
			return;
		}
	}


	map<pair<int,int>, int> ans;

	visit(adj, 1, 0, -1, ans);

	for(auto it : mp)
		cout<<ans[it.ss]<<' ';
	nl;
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