/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

int depth = -1;
void findEdge(vector<vector<int>> &edges, int s, int &edge, vector<bool> &vis, int d) {
	if (d >= depth) {
		edge = s;
		depth=d;
	}
	vis[s] = true;
	for (auto node : edges[s])
	{
		if (!vis[node]) findEdge(edges, node, edge, vis, d + 1);
	}
}

void findDistance(vector<vector<int>> &edges, int s, int d, priority_queue<pair<int, int>> &dist, vector<bool> &vis) {
	if (d > 0) dist.push({d, s});
	vis[s] = true;
	for (auto node : edges[s]) {
		if (!vis[node]) findDistance(edges, node, d + 1, dist, vis);
	}
}

void reset(vector<bool> &v) {
	for (int i = 0; i < (int)v.size(); i++) v[i] = false;
}

void solve()
{
	int n; cin >> n;
	vector<vector<int>> edges(n + 1);
	for (int i = 0; i < n - 1; ++i)
	{
		int x, y; cin >> x >> y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}

	int edge1 = -1, edge2 = -1;
	priority_queue<pair<int, int>> dist1, dist2;
	vector<bool> vis(n + 1, false);
	vector<int> ans;

	set<int> st;
	for (int i = 1; i <= n; ++i) st.insert(i);

	findEdge(edges, 1, edge1, vis, 0);
	reset(vis);
	findDistance(edges, edge1, 0, dist1, vis);
	edge2 = dist1.top().second;
	reset(vis);
	findDistance(edges, edge2, 0, dist2, vis);
	for (int i = n; i > 0; --i)
	{
		while (dist1.size() && dist1.top().first >= i) {
			st.erase(dist1.top().second);
			dist1.pop();
		}
		while (dist2.size() && dist2.top().first >= i) {
			st.erase(dist2.top().second);
			dist2.pop();
		}
		ans.push_back(min(((int)st.size() + 1LL), 1LL * n));
	}
	for (int i = n - 1; i >= 0; --i) cout << ans[i] << ' ';
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