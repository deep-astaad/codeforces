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
	int n; cin >> n;
	vll a(n), b(n);
	vll idx1(n + 1), idx2(n + 1);
	int i1 = -1, i2 = -1;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		idx1[a[i]] = i;
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
		idx2[b[i]] = i;
	}
	for (int i = 0; i < n; ++i)
	{
		if (idx1[i] > idx2[i]) {
			swap(idx1[i], idx2[i]);
		}
	}
	ll ans = idx1[1] * (idx1[1] + 1) / 2;
	ans += (n - 1 - idx2[1]) * (n - idx2[1]) / 2;
	ans += (idx2[1] - idx1[1]) * (idx2[1] - idx1[1] + 1) / 2;
	i1 = idx1[1];
	i2 = idx2[1];
	for (int i = 2; i <= n; ++i)
	{
		int l = min(i1, idx1[i]);
		int r = max(i2, idx2[i]);
		ans += n - 1 - r;
		i1 = l;
		i2 = r;
	}
	cout << ans << nn;

}

int32_t main()
{
	deep_aman;
	solve();
	return 0;
}