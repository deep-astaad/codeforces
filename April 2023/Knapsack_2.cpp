/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define all(x) (x).begin(), (x).end()

void solve()
{
	int n,W; cin>>n>>W;

	vector<int> w(n),v(n);

	for (int i = 0; i < n; ++i) {
		cin>>w[i]>>v[i];
	}

	int max_val = accumulate(all(v), 0LL);

	vector<int> dp(max_val+1, 1e18);
	dp[0]=0;

	for (int i = 0; i < n; ++i) {
		for(int j = max_val; j >= v[i]; --j) {
			dp[j]=min(dp[j], dp[j-v[i]]+w[i]);
		}
	}

	for(int i = max_val; i >= 0; --i) {
		if(dp[i]<=W){
			cout<<i<<'\n';
			break;
		}
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