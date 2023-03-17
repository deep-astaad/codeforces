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
	set<string> st;
	for (int i = 0; i < 2 * (n - 1); ++i)
	{
		// int x; cin >> x;
		string s; cin >> s;
		string t = s;
		reverse(all(t));
		if (st.find(t) != st.end()) {
			st.erase(st.find(t));
		}
		else {
			st.insert(s);
		}
	}
	if (st.size() == 0) {
		cyes;
	}
	else {
		cno;
	}

}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}