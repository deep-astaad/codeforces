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
	int n; cin >> n;
	if (n % 3 == 0) cout << n / 3 << sp << n / 3 << nn;
	else if (n % 3 == 1) cout << n / 3 + 1 << sp << n / 3 << nn;
	else cout << n / 3 << sp << n / 3 + 1 << nn;
}

int32_t main()
{
	ios; ll testcase = 1;
	cin >> testcase;
	while (testcase--) solve();
	return 0;
}