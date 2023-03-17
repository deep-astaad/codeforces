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
	int n, k, d, w; cin >> n >> k >> d >> w;
	vll t(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> t[i];
	}
	int ans = 1;
	int temp = 0, time = 0;
	for (int i = 0; i < n; ++i)
	{
		if (temp == k) {
			temp = 0;
			ans++;
		}
		if (temp == 0) {
			time = t[i] + w;
		}
		else {
			if (t[i] - time > d) {
				ans++;
				temp = 0;
				time = t[i] + w;
			}
		}
		temp++;
	}
	cout << ans << nn;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}