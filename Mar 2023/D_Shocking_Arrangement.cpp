/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define all(x) (x).begin(), (x).end()
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

#define TESTCASE
void solve()
{
	int n; cin >> n;
	vector<int> pos, neg;
	for (int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		if (x < 0) {
			neg.push_back(x);
		}
		else {
			pos.push_back(x);
		}
	}
	if (neg.size() == 0) {
		cout << "No\n";
		return;
	}
	int target = *max_element(all(pos)) - *min_element(all(neg));
	vector<int>  ans;
	int n_sum = 0, p_sum = 0, i = 0, j = 0;
	while (i < pos.size() || j < neg.size()) {
		while (i < pos.size() && p_sum + pos[i] < target) {
			p_sum += pos[i];
			n_sum = min(0LL, n_sum + pos[i]);
			ans.push_back(pos[i]);
			i++;
		}
		while (j < neg.size() && abs(n_sum + neg[j]) < target) {
			n_sum += neg[j];
			p_sum = max(0LL, p_sum + neg[j]);
			ans.push_back(neg[j]);
			j++;
		}
	}
	cout << "Yes\n";
	for (int i = 0; i < n; ++i)  cout << ans[i] << ' ';
	cout << '\n';
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