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
int func(int t){
	ll sm=0;
	while(t){
		sm+=t%10;
		t/=10;
	}
	return sm;
}
void solve()
{
	ll n,q; cin>>n>>q;
	vll v(n);
	// map<ll,ll> mp;
	ll mx=LLONG_MIN;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		mx=max(mx,v[i]);
	}
	vll pre(mx+1);
	for (int i = 0; i <= mx; ++i)
	{
		ll temp=v[i];
		while(v[i]>temp)
		pre[i]=func(i);
		// cout<<pre[i]<<sp;
	}
	// nl;
	while(q--){
		ll tt; cin>>tt;
		if(tt==2){
			ll idx; cin>>idx;
			idx--;
			cout<<v[idx]<<nn;
		}
		else{
			ll l,r; cin>>l>>r;
			l--;
			r--;
			for (int i = l; i <= r; ++i)
			{
				if(v[i]>9){
					v[i]=pre[v[i]];
				}
			}
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testcase;
    testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
		solve();
    }
    return 0;
}