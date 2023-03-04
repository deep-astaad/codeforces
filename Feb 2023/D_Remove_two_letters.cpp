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
	string s; cin >> s;
	vll v(n);
	v[1] = 1;
	for (int i = 2; i < n; ++i)
	{
		v[i] = v[i - 1];
		if (s[i] != s[i - 2]) {
			v[i]++;
		}
	}
	cout << v[n - 1] << nn;
	// unordered_set<string> st;
	// string str = "";
	// str += s[0];
	// for (int i = 2; i < s.size(); ++i)
	// {
	// 	unordered_set<string> temp;
	// 	if (i == 2) {
	// 		temp.insert(str);
	// 		temp.insert("" + s[2]);
	// 	}
	// 	else {
	// 		for (auto it : st)
	// 		{
	// 			temp.insert(it + s[i]);
	// 		}
	// 		temp.insert(str);
	// 	}
	// 	str += s[i - 1];
	// 	st = temp;
	// }
	// cout << st.size() << nn;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}