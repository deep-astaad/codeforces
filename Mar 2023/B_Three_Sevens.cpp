/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

void solve()
{
	int n; cin >> n;
	vector <vector <long long>> v;
	for (int i = 0; i < n; ++i)
	{
		int m; cin >> m;
		vector <long long> t(m);
		for (int j = 0; j < m; ++j)
		{
			cin >> t[j];
		}
		v.push_back(t);
	}
	unordered_set<int> st;
	vector <long long> ans;
	for (int i = n - 1; i >= 0; --i)
	{
		bool flag = false;
		for (int j = 0; j < v[i].size(); ++j)
		{
			if (flag == false && st.count(v[i][j]) == 0) {
				ans.push_back(v[i][j]);
				flag = true;
			}
			st.insert(v[i][j]);
		}
		if (flag == false) {
			cout << -1 << '\n';
			return;
		}
	}
	for (int i = n - 1; i >= 0; --i)
	{
		cout << ans[i] << ' ';
	}
	cout << '\n';
}

int32_t main()
{
	deep_aman;
	int testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}