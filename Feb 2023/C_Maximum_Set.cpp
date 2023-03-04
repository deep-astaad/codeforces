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
const ll mod = 998244353;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/
void solve()
{
	int l, r; cin >> l >> r;
	if (2 * l > r) {
		cout << 1 << sp << (r - l + 1) << nn;
		return;
	}
	int x = l;
	int ans = 0;
	int inc = 1;
	while (x <= r) {
		x = x * 2;
		ans++;
		inc = inc * 2;
	}
	x /= 2;
	inc /= 2;

	inc = (inc / 2) * 3;
	cout << ans << sp;
	int cnt = 0;
	int mxlen = (max(r / inc - l + 1, 0LL) % mod);
	cnt = (ans % mod) * mxlen;
	cnt %= mod;
	inc = (inc / 3) * 2;
	cnt += max(r / inc - l + 1 - mxlen, 0LL);
	cnt %= mod;


	cout << cnt << nn;

}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}