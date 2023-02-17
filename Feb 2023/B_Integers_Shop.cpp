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
	vvll v(n, vll (3));
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i][0] >> v[i][1] >> v[i][2];
	}
	int mn = LLONG_MAX, mx = LLONG_MIN;
	int mn_idx = 0, mx_idx = 0;
	int foo = 0;
	cout << v[0][2] << nn;
	for (int i = 1; i < n; ++i)
	{
		int l = v[i][0], r = v[i][1], c = v[i][2];
		if (l < mn) {
			mn_idx = i;
			mn = v[i][0];
		}
		else if (l == mn && v[mn_idx][2] > v[i][2]) {
			mn_idx = i;
			mn = v[i][0];
		}
		if (r > mx) {
			mx_idx = i;
		}
		else if (r == mx && v[mx_idx][2] > v[i][2]) {
			mx_idx = i;
		}

		if (l == v[mn_idx][0] && r == v[mx_idx][1] && (mn_idx != mx_idx || v[i][2] <= v[foo][2])) {
			foo = i;
		}
		int ans = v[mn_idx][2] + v[mx_idx][2];
		if (mn_idx == mx_idx) {
			ans = min(ans, v[foo][2]);
		}
		cout << ans << nn;
	}
	// 	else if (l == mn && r == mx) {
	// 		if (mn_idx == mx_idx && v[mn_idx][2] > c) {
	// 			mn_idx = i;
	// 			mx_idx = i;
	// 		}
	// 		else if (v[mn_idx][2] + v[mx_idx][2] > c) {
	// 			mn_idx = i;
	// 			mx_idx = i;
	// 		}
	// 	}
	// 	else if (l == mn && mn_idx != mx_idx && v[i][2] < v[mn_idx][2]) {
	// 		mn_idx = i;
	// 	}
	// 	else if (r == mx && mn_idx != mx_idx && v[i][2] < v[mx_idx][2]) {
	// 		mx_idx = i;
	// 	}

	// 	if (mn_idx == mx_idx) {
	// 		cout << v[mn_idx][2] << nn;
	// 	}
	// 	else {
	// 		cout << v[mn_idx][2] + v[mx_idx][2] << nn;
	// 	}
	// }
	// int mn_idx = 0, mx_idx = 0;
	// for (int i = 0; i < n; ++i)
	// {
	// 	if ((v[i][0] < v[mn_idx][0] && v[i][1] > v[mx_idx][1]) || (v[i][0] == v[mn_idx][0] && v[i][1] > v[mx_idx][1]) || (v[i][0] < v[mn_idx][0] && v[i][1] == v[mx_idx][1])) {
	// 		mn_idx = i;
	// 		mx_idx = i;
	// 	}
	// 	else if (v[i][0] == v[mn_idx][0] && v[i][1] == v[mx_idx][1]) {
	// 		if (mn_idx == mx_idx) {
	// 			if (v[mx_idx][2] > v[i][2]) {
	// 				mn_idx = i;
	// 				mx_idx = i;
	// 			}
	// 		}
	// 		else if (v[mn_idx][2] + v[mx_idx][2] > v[i][2]) {
	// 			mn_idx = i;
	// 			mx_idx = i;
	// 		}
	// 	}
	// 	else if (v[i][0] < v[mn_idx][0]) {
	// 		mn_idx = i;
	// 	}
	// 	else if (v[i][0] == v[mn_idx][0] && v[i][2] < v[mn_idx][2] && mn_idx != mx_idx) {
	// 		mn_idx = i;
	// 	}
	// 	else if (v[i][1] > v[mx_idx][1]) {
	// 		mx_idx = i;
	// 	}
	// 	else if (v[i][1] == v[mx_idx][1] && v[i][2] < v[mx_idx][2] && mn_idx != mx_idx) {
	// 		mx_idx = i;
	// 	}

	// 	if (mn_idx == mx_idx) {
	// 		cout << v[mx_idx][2] << nn;
	// 	}
	// 	else {
	// 		cout << v[mx_idx][2] + v[mn_idx][2] << nn;
	// 	}
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}