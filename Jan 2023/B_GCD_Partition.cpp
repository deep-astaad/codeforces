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
	ll n; cin>>n;
	vll v(n);
	vll presum(n+1);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		presum[i]=presum[i-1]+v[i-1];
	}
	ll sum=presum[n];
	ll ans=LLONG_MIN;
	for (int i = 1; i < n; ++i)
	{
		// cout<<presum[i]<<sp;
		ans=max(ans,__gcd(presum[i],sum-presum[i]));
	}
	// nl;
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