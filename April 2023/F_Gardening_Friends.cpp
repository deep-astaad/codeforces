/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

int chechDepth(vector<vector<long long>> &adj, int node, int root){

	int depth=0;
	for(auto it : adj[node])
		if(it != root) 
			depth=max(1+chechDepth(adj, it, node), depth);

	return depth;
}

void findDist(vector<vector<long long>> &adj, int node, int root, int d, vector<long long> &dist){

	dist[node]=d;
	for(auto it : adj[node])
		if(it!=root) 
			findDist(adj, it, node, d+1, dist);
}

#define TESTCASE
void solve()
{
	int n,k,c; cin>>n>>k>>c;
	vector<vector<int>> adj(n+1);
	for (int i = 0; i < n-1; ++i) {
		int u,v; cin>>u>>v;
		adj[u].push_back(v), adj[v].push_back(u);
	}

	vector<int> dist(n+1);
	findDist(adj, 1, 0, 0, dist);

	int farthest = 1;
	for (int i = 1; i <= n; ++i)
		if(dist[i]>dist[farthest]) farthest=i;

	vector<int> distFarthest(n+1);
	findDist(adj, farthest, 0, 0, distFarthest);

	int ans=0;
	for (int i = 1; i <= n; ++i)
		ans=max(ans, (distFarthest[i]*k)-(dist[i]*c));

	cout<<ans<<'\n';
}

int32_t main()
{
	// cout<<(long long)((log(1e5)))<<'\n';
	deep_aman;
	int testcase = 1;
	#ifdef TESTCASE
		cin >> testcase;
	#endif
	while (testcase--) solve();
	return 0;
}