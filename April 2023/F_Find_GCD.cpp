/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
const int mod = 1e9 + 7;
#define TESTCASE


vector<int> f;

void fact(){
	f.push_back(1);
	for (int i = 1; i <= 1e5; ++i)
	{
		f.push_back((f.back()*i)%(mod-1));
	}
}

int binpow(int b, int p){
	b %= mod;
	int res = 1;
	while(p > 0){
		if(p & 1) 
			res *= b;
		b *= b;
		b%=mod;
		res %= mod;
		p >>= 1;
	}
	return res%mod;
}

void solve()
{
	int n,a,b; cin>>a>>b>>n;
	int x=min(a,b);
	
	int ans = binpow(n, f[x]);

	cout<<ans<<'\n';
}

int32_t main()
{
	deep_aman;
	int testcase = 1;
	fact();
	#ifdef TESTCASE
		cin >> testcase;
	#endif
	while (testcase--) solve();
	return 0;
}