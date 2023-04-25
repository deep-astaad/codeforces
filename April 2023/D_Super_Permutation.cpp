/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	int n; cin>>n;
	if(n==1) cout<<1<<'\n';
	else if(n&1) cout<<-1<<'\n';
	else{
		int low=1, hi=n;
		for (int i = 0; i < n/2; ++i) {
			cout<<hi<<' '<<low<<' ';
			hi-=2, low+=2;
		}
		cout<<'\n';
	}
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