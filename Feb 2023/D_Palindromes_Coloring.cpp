/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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


*/
void solve()
{
	int n, k; cin >> n >> k;
	string s; cin >> s;
	map<char, int> mp;
	for (int i = 0; i < s.size(); ++i)
	{
		mp[s[i]]++;
	}
	int total_pairs = 0, total_single = 0;
	for (auto it : mp)
	{
		total_pairs += it.ss / 2;
		total_single += it.ss % 2;
	}
	int ans = 0;
	if (total_pairs >= k) {
		ans += 2LL * (total_pairs / k);
		total_single += (total_pairs % k) * 2;
	}
	else
		total_single += 2LL * total_pairs;
	if (total_single >= k) {
		ans++;
	}
	cout << ans << nn;
}

int32_t main()
{
	ios; ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}