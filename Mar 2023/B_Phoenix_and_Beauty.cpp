/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define vll vector <long long>
#define pll pair <long long, long long>
#define vvll vector <vector <long long>>
#define vpll vector <pair <long long, long long>>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define sp ' '
#define endl '\n'
#define nn '\n'
#define cyes cout << "YES\n";
#define cno cout << "NO\n";
#define nl cout << '\n';
const ll mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/
void solve()
{
	int n, k; cin >> n >> k;
	vll v(n);
	unordered_set<int> st;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		st.insert(v[i]);
	}
	if (st.size() > k) {
		cout << -1 << nn;
		return;
	}
	unordered_set<int> st1;
	queue<int> q;
	int i = 0;
	while (q.size() < k) {
		if (st1.count(v[i])) {
			for (auto it : st)
			{
				if (st1.count(it) == 0) {
					st1.insert(it);
					q.push(it);
				}
			}
			while (q.size() < k) {
				q.push(1);
			}
		}
		else {
			q.push(v[i]);
			st1.insert(v[i++]);
		}
	}

	vll ans;
	while (i < n) {
		if (q.front() == v[i]) {
			// cout << v[i] << sp;
			ans.pb(v[i]);
			q.pop();
			q.push(v[i]);
			i++;
		}
		else {
			// cout << q.front() << sp;
			ans.pb(q.front());
			q.push(q.front());
			q.pop();
		}
	}
	while (q.size() > 0) {
		// cout << q.front() << sp;
		ans.pb(q.front());
		q.pop();
	}
	cout << ans.size() << nn;
	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << sp;
	}
	nl;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}