/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define ll long long
#define vll vector <long long>
#define all(x) (x).begin(), (x).end()
#define pll pair <long long, long long>
#define vvll vector <vector <long long>>
#define vpll vector <pair <long long, long long>>
#define pb push_back
#define ff first
#define ss second
#define sp ' '
#define endl '\n'
#define nl cout << '\n'
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define nn '\n'
#define INF LLONG_MAX
const ll mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

int fun(vll &s, vll &c, int idx, int picked, int prev,vector<vector<vector<int>>> &dp){
	if(idx==s.size()){
		if(picked == 3) return 0;
		else return -1;
	}

	if(dp[idx][picked][prev]!=-2) return dp[idx][picked][prev];

	if(picked == 3) return dp[idx][picked][prev]=0;

	int take=-1, nottake=-1;

	if(picked==0 || s[idx]>s[prev]){
		take = c[idx];
		int val=fun(s,c,idx+1,picked+1,idx,dp);
		if(val!=-1) take+=val;
		else take=-1;
	}

	nottake = fun(s,c,idx+1,picked,prev,dp);

	if(take==-1 && nottake==-1) return dp[idx][picked][prev]=-1;
	else if(take!=-1 && nottake==-1) return dp[idx][picked][prev]=take;
	else if(nottake!=-1 && take==-1) return dp[idx][picked][prev]=nottake;
	else return dp[idx][picked][prev]=min(take, nottake);

}

void solve()
{
	int n; cin>>n;
	vector<int> c(n), s(n);
	for (int i = 0; i < n; ++i)
		cin>>s[i];

	for (int i = 0; i < n; ++i) 
		cin>>c[i];

	vector<vector<int>> dp(n+1, vector<int> (4, INF));

	for (int i = 1; i <= n; ++i) {
		dp[i][1]=c[i-1];
		for (int j = 1; j < i; ++j) {
			for(int k = 1; k < 3; ++k) {
				if(s[j-1]<s[i-1] && dp[j][k]!=INF) dp[i][k+1]=min(c[i-1] + dp[j][k], dp[i][k+1]);
			}
		}
	}

	int ans=INF;
	for (int i = 0; i <= n; ++i) {
		ans=min(ans,dp[i][3]);
	}

	if(ans==INF) cout<<-1<<'\n';
	else cout<<ans<<'\n';

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