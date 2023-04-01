/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define ll long long
#define vll vector <long long>
#define all(x) (x).begin(), (x).end()
#define pll pair <long long, long long>
#define vvll vector <vector <long long>>
#define vpll vector <pair <long long, long long>>
#define pb push_back
#define ff first
#define ss second
#define sp ' '
#define endl '\n'
#define nl cout << '\n'
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define nn '\n'
const ll mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

int cost = LLONG_MAX;
vector<int> ans;
void fun(vector<vector<pair<int, int>>> e, int s, int d, int &curr, vector<int> &vis, stack<int> &path) {
	if (s == d) {
		if (cost > curr) {
			cost = curr;
			ans.clear();
			stack<int> tmp = path;
			while (tmp.size()) {
				ans.pb(tmp.top());
				tmp.pop();
			}
		}
		return;
	}
	vis[s] = 1;
	for (auto it : e[s])
	{
		if (vis[it.ff] == 1) {
			continue;
		}
		else {
			path.push(it.ff);
			int pw = pow(2, it.ss);
			curr += pw;
			fun(e, it.ff, d, curr, vis, path);
			vis[it.ff] = 0;
			curr -= pw;
			path.pop();
		}
	}
	vis[s] = 0;
}
void solve()
{
	int n, e; cin >> n >> e;
	vector<vector<pair<int, int>>> edges(n + 1);
	for (int i = 0; i < e; ++i)
	{
		int x, y, c; cin >> x >> y >> c;
		edges[x].pb({y, c});
		edges[y].pb({x, c});
	}
	// for (auto v : edges)
	// {
	// 	for (auto p : v)
	// 	{
	// 		cout << "{" << p.ff << "," << p.ss << "} ";
	// 	}
	// 	nl;
	// }
	int src, dest; cin >> src >> dest;
	vector<int> visited(n + 1, 0);
	stack<int> path;
	int curr = 0;
	fun(edges, src, dest, curr, visited, path);
	if (cost == LLONG_MAX) {
		cout << -1 << nn;
		return;
	}
	cout << cost % mod << nn;
	cout << ans.size() + 1 << nn;
	ans.pb(src);
	reverse(all(ans));
	for (auto it : ans) cout << it << sp;
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