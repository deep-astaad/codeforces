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
void solve()
{
	ll n,s; cin>>n>>s;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	map<ll,ll> mp;
	for (int i = 1; i < n; ++i)
	{
		if(i==n-1){
			map<ll,ll> mp1;
			for(auto it:mp){
				if(mp1.find(0LL)!=mp1.end() && mp1[0LL]>it.ss+(it.ff*v[i])){
					mp1[0LL]=it.ss+it.ff*v[i];
				}
				else if(mp1.find(0LL)==mp1.end()){
					mp1[0LL]=it.ss+(it.ff*v[i]);
				}
			}
			mp=mp1;
			continue;
		}
		ll x,y;
		if(v[i]<=s){
			x=0;
			y=v[i];
		}
		else{
			x=min(s,v[i]-s);
			y=max(s,v[i]-s);
		}
		if(i==1){
			mp[y]=v[0]*x;
			if(x!=y){
				mp[x]=v[0]*y;
			}
		}
		else{
			map<ll,ll> mp1;
			for(auto it:mp){
				if(mp1.find(x)!=mp1.end() && mp1[x]>it.ff*y+it.ss){
					mp1[x]=it.ff*y+it.ss;
				}
				else if(mp1.find(x)==mp1.end()){
					mp1[x]=it.ff*y+it.ss;
				}
				if(mp1.find(y)!=mp1.end() && mp1[y]>it.ff*x+it.ss){
					mp1[y]=it.ff*x+it.ss;
				}
				else if(mp1.find(y)==mp1.end()){
					mp1[y]=it.ff*x+it.ss;
				}
			}
			mp=mp1;
		}
	}
	ll mn=LLONG_MAX;
	for(auto it:mp){
		mn=min(it.ss,mn);
	}
	cout<<mn<<nn;
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