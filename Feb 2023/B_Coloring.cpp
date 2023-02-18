/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define vll vector <ll>
#define pll pair <ll, ll>
#define vvll vector <vector <ll>>
#define vpll vector <pair <ll, ll>>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define sp " "
#define endl "\n"
#define nn "\n"
#define cyes cout << "YES" << nn;
#define cno cout << "NO" << nn;
#define nl cout << nn;
const ll mod = 1e9 + 7;
/*


*/

void solve()
{
	ll n, m, k; cin >> n >> m >> k;
	vll v(m);
	for (int i = 0; i < m; ++i)
	{
		cin >> v[i];
	}
	sort(all(v));
	reverse(all(v));
	ll segments = n / k;
	if (n % k) segments++;
	ll last = n % k;
	for (int i = 0; i < m; ++i)
	{
		if (v[i] > segments) {
			cno;
			return;
		}
		else if (v[i] == segments) {
			last--;
		}

		if (last == 0) {
			segments--;
		}
	}
	cyes;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}