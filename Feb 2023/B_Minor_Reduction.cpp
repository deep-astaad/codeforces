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
10057
10012

100579
100129
100516

*/

void solve()
{
	string s; cin >> s;
	ll idx = -1;
	for (int i = 0; i < s.size() - 1; ++i)
	{
		if ((s[i] - '0') + (s[i + 1] - '0') >= 10) {
			idx = i;
		}
	}
	if (idx != -1) {
		for (int i = 0; i < s.size(); ++i)
		{
			if (i == idx) {
				cout << (s[i] - '0') + (s[i + 1] - '0');
				i++;
			}
			else {
				cout << s[i];
			}
		}
	}
	else {
		cout << (s[0] - '0') + (s[1] - '0');
		for (int i = 2; i < s.size(); ++i)
		{
			cout << s[i];
		}
	}
	nl;

}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}