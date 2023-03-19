/* Code by : Aman Deep (deep_aman) */
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
	int x, y; cin >> x >> y;
	vll ans;
	ans.pb(x);
	bool flag = false;
	while (ans[0] - ans.back() != 1 || flag == false) {
		if (flag)
			ans.pb(ans.back() + 1);
		else
			ans.pb(ans.back() - 1);
		if (ans.back() == y) {
			flag = true;
		}
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
	int testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}