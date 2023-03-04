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
	string s1, s2; cin >> s1 >> s2;
	int n = s1.size(), m = s2.size();
	if (s1[n - 1] == s2[m - 1]) {
		cyes;
		cout << "*" << s1[n - 1] << nn;
		return;
	}
	else if (s1[0] == s2[0]) {
		cyes;
		cout << s1[0] << "*" << nn;
		return;
	}
	else {
		for (int i = 0; i < n - 1; ++i)
		{
			for (int j = 0; j < m - 1; ++j)
			{
				if (s1[i] == s2[j] && s1[i + 1] == s2[j + 1]) {
					cyes;
					cout << "*" << s1[i] << s1[i + 1] << "*" << nn;
					return;
				}
			}
		}
	}
	cno;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}