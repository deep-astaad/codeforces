// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define cyes cout<<"YES"<<"\n"
#define cno cout<<"NO"<<"\n"
#define c(x) cout<<x<<"\n"
#define sp " "
#define nn "\n"
#define nl cout<<nn;
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
//-------------------------------------------------------------------------------//
const ll M = 1e9+7;
/*



*/

void solve()
{
	// only perfect squares have odd divisors
	// A^B=C --> A^c=B
	// count the subarrays whose xor has odd divisors
	ll n; cin>>n;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	vll prex(n+1);
	for (int i = 1; i <= n; ++i)
	{
		prex[i]=prex[i-1]^v[i-1];
	}
	// for (int i = 0; i < n+1; ++i)
	// {
	// 	cout<<prex[i]<<sp;
	// }
	// nl;
	vll cnt((2*n) + 1);
	ll ans=n*(n+1)/2;
	// map<ll,ll> mp;  //map will give TLE as searches in O(logn) time
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j*j <= 2*n; ++j)
		{
			ll search=prex[i]^(j*j);
			// if(mp.find(search)!=mp.end()){
			// 	ans-=mp[search];
			// }
			// (j*j)^prex[i]=2*n ^ 1, then it can not be found in cnt vector
			if(search<=2*n) ans-=cnt[search];
			// ans-=cnt[search];
		}
		// mp[prex[i]]++;
		cnt[prex[i]]+=1;
	}
	cout<<ans<<nn;
}

int main()
{
    ll testcase;
    testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
		solve();
    }
    return 0;
}