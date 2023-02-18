// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define cyes cout<<"YES"<<"\n"
#define cno cout<<"NO"<<"\n"
#define sp " "
#define nn "\n"
#define nl cout<<nn;
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
//-------------------------------------------------------------------------------//
const ll mod = 1e9 + 7;
vll v = {0, 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111};
/*

1 100 (including 1)
1 2 3 4 5 6 7 8 9 10 => 11
11 12 13 14 15 16 17 18 19 20  => 11
21 22 .......................  => 11
.
.
.
.
91 92 93 94 95 96 97 98 99 100 => 12
								  11*10 + 1 = 111

100 110
101 102 103 104 105 106 107 108 109 110 => 11
100 => 11+9*11=111

100 => 111
400 => 4*111

final ans = calculate ans for [1,r] - calculate ans for [1,l]

*/
void solve()
{
	string l, r; cin >> l >> r;
	ll n = l.size();
	ll m = r.size();
	ll ans_l = 0, ans_r = 0;
	for (int i = 0; i < n; ++i)
	{
		ans_l += (l[i] - '0') * 1LL * (v[n - i]);
	}
	for (int i = 0; i < m; ++i)
	{
		ans_r += (r[i] - '0') * 1LL * (v[m - i]);
	}
	// cout<<ans_l<<sp<<ans_r<<nn;
	cout << ans_r - ans_l << nn;

}

int main()
{	ios

	ll testcase;
	testcase = 1;
	cin >> testcase;
	while (testcase--)
	{
		solve();
	}
	return 0;
}