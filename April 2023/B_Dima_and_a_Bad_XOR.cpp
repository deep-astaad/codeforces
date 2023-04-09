/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

vector<int> ans;
bool fun(vector<vector<int>> &mat, int idx, int xr, vector<vector<int>> &dp){
	if(idx==mat.size()){
		if(xr>0) return true;
		else{
			dp[idx][xr] = 0;
			return false;
		}
	}
	for (int j = 0; j < mat[0].size(); ++j)
	{
		if(dp[idx][xr^mat[idx][j]] != -1) continue;
		else if(fun(mat, idx+1, (xr)^(mat[idx][j]), dp)){
			ans.push_back(j+1);
			return true;
		}
		else dp[idx][xr^mat[idx][j]]=0;
	}
	return false;
}

void solve()
{
	ans.resize(0);
	int n,m; cin>>n>>m;
	vector<vector<int>> mat(n, vector<int>(m));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>mat[i][j];
		}
	}
	vector<vector<int>> dp(501, vector<int>(1023,-1));
	for (int i = 0; i <= n; ++i)
	{
		dp[i][0]=0;
	}
	for (int j = 0; j <= n; ++j)
	{
		dp[0][j]=0;
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j < 2050; ++j)
		{
			if(dp[i][j] != -1) continue;
			else if(dp[i][])
		}
	}

	if(fun(mat, 0, 0, dp)){
		cout<<"TAK"<<'\n';
		for(int i = n-1; i >= 0; --i)
		{
			cout<<ans[i]<<' ';
		}
		cout<<'\n';
	}
	else cout<<"NIE"<<'\n';
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