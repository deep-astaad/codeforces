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
	int n; cin >> n;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	// vll pre(n);
	// for (int i = n - 1; i >= 0; --i)
	// {
	// 	if (i == n - 1) {
	// 		if (v[i] == 0) {
	// 			pre[i]++;
	// 		}
	// 	}
	// 	else {
	// 		if (v[i] == 0) {
	// 			pre[i] = pre[i + 1] + 1;
	// 		}
	// 		else {
	// 			pre[i] = pre[i + 1];
	// 		}
	// 	}
	// }
	int p = 0;
	// vll bonus;
	priority_queue<int> pq;
	// int idx = 0;
	for (int i = 0; i < n; ++i)
	{
		if (v[i] > 0) {
			// bonus.pb(v[i]);
			pq.push(v[i]);
		}
		else if (v[i] == 0) {
			if (pq.size() == 0) {
				continue;
			}
			p += pq.top();
			pq.pop();
			// idx++;
			// bonus.erase(bonus.begin() + bonus.size() - 1);
		}
	}
	cout << p << nn;

}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}