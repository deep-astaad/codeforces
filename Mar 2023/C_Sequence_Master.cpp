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

//Code to find pattern for -2,-2,2,2 which gives answer 5
ll random(ll min, ll max)
{
	ll range = max - min + 1;
	ll num = rand() % range + min;
	return num;
}
void function_two() {
	int sz = 4;
	vll v = { -2, -2, 2, 2};
	int mn = LLONG_MAX, mx = LLONG_MIN;
	for (int i = 0; i < sz; ++i)
	{
		mn = min(mn, v[i]);
		mx = max(mx, v[i]);
	}
	vll t(sz);
	while (true) {
		t[0] = random(mn, mx), t[1] = random(mn, mx), t[2] = random(mn, mx), t[3] = random(mn, mx);
		int a = t[0], b = t[1], c = t[2], d = t[3];
		sort(all(t));
		if (	a + b == c * d && a + c == b * d && a + d == b * c &&
		        b + c == a * d && b + d == a * c &&
		        c + d == a * d
		   )
		{
			int dif = 0;
			for (int i = 0; i < 4; ++i)
			{
				dif += abs(v[i] - t[i]);
			}
			if (dif == 5) {
				cout << t[0] << sp << t[1] << sp << t[2] << sp << t[3] << nn;
				return;
			}

		}
	}
}
// Solution
void solve()
{
	int n; cin >> n;
	vll v(2 * n);
	for (int i = 0; i < 2 * n; ++i)
	{
		cin >> v[i];
	}
	sort(all(v));
	int dif1 = 0, dif2 = 0;
	for (int i = 0; i < 2 * n; ++i)
	{
		dif1 += abs(v[i]);
		if (i != (2 * n) - 1)
			dif2 += abs(v[i] + 1);
	}
	dif2 += abs(v[(2 * n) - 1] - n);
	if (n == 1) {
		cout << abs(v[0] - v[1]) << nn;
	}
	else if (n == 2) {
		int dif3 = 0;
		for (int i = 0; i < 4; ++i)
		{
			dif3 += abs(v[i] - 2);
		}
		cout << min({dif1, dif2, dif3}) << nn;
	}
	else if (n & 1) {
		cout << dif1 << nn;
	}
	else {
		cout << min(dif1, dif2) << nn;
	}

}

int32_t main()
{
	srand(time(NULL));
	deep_aman;
	int testcase = 1;
	cin >> testcase;
	function_two();
	// while (testcase--) solve();
	return 0;
}