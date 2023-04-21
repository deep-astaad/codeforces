/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int


/*
Do not minimize steps,
Ian is in hurry but can wait for 2 seconds
*/
#define TESTCASE
void solve()
{
	int a,b; cin>>a>>b;
	cout<<2<<'\n'<<1<<' '<<b-1<<'\n'<<a<<' '<<b<<'\n';
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