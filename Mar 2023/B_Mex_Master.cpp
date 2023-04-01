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
	int z = 0, o = 0, t = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		if (v[i] == 0) {
			z++;
		}
		else if (v[i] == 1) {
			o++;
		}
		else {
			t++;
		}
	}
	if (z == n) {
		cout << 1 << nn;
		return;
	}
	if (n % 2 == 0) {
		if (z > n / 2) {
			if (t > 0)
				cout << 1 << nn;
			else {
				cout << 2 << nn;
			}
		}
		else {
			cout << 0 << nn;
		}
	}
	else {
		if (z > (n / 2) + 1) {
			if (t > 0)
				cout << 1 << nn;
			else {
				cout << 2 << nn;
			}
		}
		else {
			cout << 0 << nn;
		}
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