/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define all(x) (x).begin(), (x).end()


vector<int> v = {1200, 1400, 1600, 1900, 2100, 2300, 2400, 2600, 3000};
// #define TESTCASE
void solve()
{
	int n; cin>>n;
	cout<<*upper_bound(all(v),n);

}

int32_t main()
{
	deep_aman;
	int testcase = 1;
	#ifdef TESTCASE
		cin >> testcase;
	#endif
	while (testcase--) solve();
	return 0;
}