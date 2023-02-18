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
const ll mod = 998244353;
/*


*/

/*
ll binExp(ll x, ll p){

}
ll modInverse(ll n) {
	return n^(mod - 2);
}
*/

void extended(ll a, ll b, ll &s1, ll &s2) {
	if (b == 0) {
		return;
	}
	ll s = s1 - (a / b) * s2;
	s1 = s2;
	s2 = s;
	extended(b, a % b, s1, s2);
	return;
}

ll modInverse(ll n) {
	ll s1 = 0, s2 = 1;
	extended(mod, n, s1, s2);
	// cout << (s1 % mod + mod) << nn;
	return (s1 % mod + mod) % mod;
}
ll fact(ll n) {
	ll ans = 1;
	for (int i = 2; i <= n; ++i)
	{
		ans = ((ans % mod) * (i % mod)) % mod;
	}
	return ans % mod;
}


void solve()
{
	ll n; cin >> n;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	n /= 3;
	ll d = n / 2;
	ll up = fact(n) % mod;
	ll dn = fact(d) % mod;

	dn = ((dn % mod) * (dn % mod)) % mod;
	// cout << up << sp << dn << nn;
	ll inverse = modInverse(dn);
	// cout << inverse << nn;
	ll ans = ((up % mod) * (inverse % mod)) % mod;
	// cout << ans << nn;
	for (int i = 0; i < v.size(); i += 3)
	{
		vll vec(3);
		vec[0] = v[i]; vec[1] = v[i + 1]; vec[2] = v[i + 2];
		sort(all(vec));
		if (vec[2] == vec[0]) {
			ans = ((ans % mod) * (3)) % mod;
		}
		else if (vec[1] == vec[0]) {
			ans = ((ans % mod) * (2)) % mod;
		}
	}
	cout << ans % mod << nn;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	// cin >> testcase;
	while (testcase--) solve();
	return 0;
}