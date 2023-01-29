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
	map<ll,ll> mp;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		mp[v[i]]++;
	}
	// bool flag=true;
	ll ans=0,tt=0;
	ll prev=-1;
	// if(mp.begin()->ff!=0) {ans++; flag=false;}
	for(auto it:mp){
		if(it.ff<=tt){
			tt+=it.ss;
			prev=it.ff;
		}
		else{
			if(prev<=tt-1) ans++;
			tt+=it.ss;
			prev=it.ff;
			// if(flag){
			// 	tt+=it.ss;
			// 	flag=false;
			// }
			// else{
			// 	ans++;
			// 	tt+=it.ss;
			// 	flag=false;
			// }
			
		}
	}
	if(mp.rbegin()->ff<=tt) ans++;
	cout<<ans<<nn;
	// sort(all(v));
	// ll ans=0;
	// ll tt=0;
	// for (int i = 0; i < n-1; ++i)
	// {
	// 	if(v[i]<=tt){
	// 		tt++;
	// 	}
	// 	if(v[i+1]>tt){
	// 		ans++;
	// 	}
	// }
	// // if(v[n-1]>tt) ans++;
	// ans++;
	// cout<<ans<<nn;
	
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