/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define TESTCASE
void solve()
{
	int n; cin>>n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) cin>>v[i];
	for (int i = 0; i < n; ++i)
	{
		if(v[i]<=i+1){
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
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