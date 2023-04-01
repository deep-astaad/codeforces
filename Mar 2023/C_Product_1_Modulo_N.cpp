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
C. Product 1 Modulo N
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
	extended(n, n - 1, s1, s2);
	return (s1 % n + n) % n;
}

void solve()
{
	int ans = 1;
	int mod = 77;
	int num = 5;
	int pow = 13;
	for (int i = 0; i < pow; ++i)
	{
		ans %= mod;
		ans = (ans * num) % mod;
		ans %= mod;
	}
	cout << ans % mod << nn;
}

int32_t main()
{
	deep_aman;
	int testcase = 1;
	// cin >> testcase;
	while (testcase--) solve();
	return 0;
}