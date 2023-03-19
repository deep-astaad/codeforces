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
void solve()
{
	int n; cin >> n;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int l = 0, r = n - 1;
	int mn = 1, mx = n;
	while (l < r) {
		if (v[l] == mn) {
			l++;
			mn++;
		}
		else if (v[r] == mn) {
			r--;
			mn++;
		}
		else if (v[l] == mx) {
			l++;
			mx--;
		}
		else if (v[r] == mx) {
			r--;
			mx--;
		}
		else {
			break;
		}
	}
	if (l == r) {
		cout << -1 << nn;
	}
	else {
		cout << l + 1 << sp << r + 1;
		nl;
	}

}

int32_t main()
{
	deep_aman;
	int testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}