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
	int curr = -1, cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		if (v[i] == 0) {
			curr = -1;
			cnt++;
		}
		else if (v[i] == 3) {
			if (curr != -1) {
				if (curr == 2) {
					curr = 1;
				}
				else {
					curr = 2;
				}
			}
		}
		else if (v[i] == 2) {
			if (curr == -1 || curr == 1) {
				curr = 2;
			}
			else {
				curr = -1;
				cnt++;
			}
		}
		else {
			if (curr == -1 || curr == 2) {
				curr = 1;
			}
			else {
				curr = -1;
				cnt++;
			}
		}
	}
	cout << cnt << nn;

}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	// cin >> testcase;
	while (testcase--) solve();
	return 0;
}