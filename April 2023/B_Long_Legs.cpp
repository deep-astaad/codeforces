/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE

void solve()
{
	int a,b; cin>>a>>b;
	int ans=LLONG_MAX;
	for (int i = 1; i <= 1e5; ++i)
	{
		int temp=0;
		temp+=a/i;
		if(a%i) temp++;
		temp+=b/i;
		if(b%i) temp++;
		temp+=i-1;
		ans=min(ans,temp);
	}
	cout<<ans<<'\n';
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