// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define deb(x); cout << #x << " = " << x << endl;
#define cyes cout<<"YES"<<"\n"
#define cno cout<<"NO"<<"\n"
#define sp " "
#define nn "\n"
#define nl cout<<nn;

const unsigned int M = 1000000007;

void solve()
{
	ll n,m; cin>>n>>m;
	vpll pr(m);
	vll v(n,n);
	for (int i = 0; i < m; ++i)
	{
		ll f,s;
		cin>>f>>s;
		pr[i]=make_pair(f,s);
		if(f<=s) v[f-1]=min(v[f-1],s-1);
		if(s<=f) v[s-1]=min(v[s-1],f-1);
	}
	
	ll mn=LLONG_MAX;
	for (int i = n-1; i >= 0; --i)
	{
		mn=min(mn,v[i]);
		if(v[i]>mn) v[i]=mn;
	}

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<v[i]<<sp;
	// }
	ll ans=0;
	for (int i = 0; i < n; ++i)
	{
		// cout<<i+1<<sp<<v[i]<<sp<<v[i]-i<<nn;
		ans+=v[i]-i;
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