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
int func(vll v, int l, int idx) {
	int sum = 0;
	for (int i = l; i <= idx; ++i)
	{
		sum += v[i];
	}
	if (idx >= 1 && l <= 1) {
		return sum + 1;
	}
	return sum;
}
void solve()
{
	int n; cin >> n;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	vll pre(n + 1);
	for (int i = 1; i < n; ++i)
	{
		pre[i] = pre[i - 1] + v[i - 1];
	}
	int l = 0, r = n - 1;
	while (l < r) {
		int mid = (l + r) / 2;
		cout << "? " << mid + 1 - l << sp;
		for (int i = l; i <= mid; ++i)
		{
			cout << i + 1 << sp;
		}
		nl;
		cout.flush();
		int wt; cin >> wt;
		if (wt == pre[mid + 1] - pre[l]) {
			l = mid + 1;
		}
		else {
			r = mid;
		}
	}
	cout << "! " << l + 1;
	nl;
	cout.flush();
}

int32_t main()
{
	// cout << pow(2, 30) << nn;
	deep_aman;
	int testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}