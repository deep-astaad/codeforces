/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define TESTCASE
void solve()
{
	int  n,t; cin>>n>>t;
	vector<int> v(n),b(n);
	for (int i = 0; i < n; ++i) cin>>v[i];
	for (int i = 0; i < n; ++i)  cin>>b[i];

	int ans=-2, val=-1;
	for (int i = 0; i < n; ++i)
	{
		if(v[i]+i<=t){
			if(b[i]>val){
				ans=i;
				val=b[i];
			}
		}
	}

	cout<<ans+1<<'\n';

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