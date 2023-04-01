/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define all(x) (x).begin(),(x).end()
#define nn '\n'
void solve()
{
	string s; cin >> s;
	sort(all(s));
	if (s[0] == s[3]) {
		cout << -1 << nn;
	}
	else if (s[0] == s[2] || s[1] == s[3]) {
		cout << 6 << nn;
	}
	else {
		cout << 4 << nn;
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