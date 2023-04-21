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
const ll mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

int fun(vector<int> &v, vector<int> &t, int idx, int k, int pos, int algos, vvll &dp){
	if(idx==v.size()){
		dp[idx][pos]=algos;
		return dp[idx][pos];
	}
	if(dp[idx][pos]!=-1) return dp[idx][pos];
	if(pos==v.size()){
		if(t[idx]==1){
			dp[idx][pos]=fun(v,t,idx+1,k,pos,algos+v[idx],dp);
		}
		else dp[idx][pos]=fun(v,t,idx+1,k,pos,algos,dp);
		dp[idx][pos]=max(dp[idx][pos],fun(v,t,idx+1,k,idx,algos+v[idx],dp));
	}
	else{
		if(t[idx]==1 || idx<=pos+k-1){
			dp[idx][pos]=fun(v,t,idx+1,k,pos,algos+v[idx],dp);
		}
		else dp[idx][pos]=fun(v,t,idx+1,k,pos,algos,dp);
	}
	return dp[idx][pos];
}

void solve()
{
	int n,k; cin>>n>>k;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	vll t(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>t[i];
	}
	vll prefix(n), free(n);
	prefix[0]=v[0];
	free[0]=t[0]*v[0];
	for (int i = 1; i < n; ++i)
	{
		prefix[i]=prefix[i-1]+v[i];
		free[i]=free[i-1]+(t[i]*v[i]);
	}
	int ans=0;
	for (int i = 0; i < n; ++i)
	{
		int temp=0;
		temp+=prefix[min(i+k-1,n-1)];
		if(i-1>=0) temp-=prefix[i-1];
		if(i-1>=0) temp+=free[i-1];
		temp+=free[n-1]-free[min(i+k-1,n-1)];
		ans=max(ans,temp);
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