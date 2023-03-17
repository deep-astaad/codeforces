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
bool game(multiset<int> st, int k) {
	for (int i = k; i > 0; --i)
	{
		auto it = st.upper_bound(i);
		if (it == st.begin()) {
			return false;
		}
		else {
			it--;
			st.erase(it);
			if (st.size()) {
				st.erase(st.begin());
			}
		}
	}
	return true;
}
void solve()
{
	int n; cin >> n;
	multiset<int> st;
	int ones = 0;
	for (int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		if (x == 1) ones++;
		st.insert(x);
	}
	int l = 0, r = ones;
	int ans = 0;
	while (l <= r) {
		int mid = l + ((r - l) / 2);
		if (game(st, mid)) {
			l = mid + 1;
			ans = mid;
		}
		else {
			r = mid - 1;
		}
	}
	cout << ans << nn;
	return;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}