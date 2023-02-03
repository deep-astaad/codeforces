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
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	map<ll,ll> mp;
	for (int i = 0; i < n; ++i)
	{
		mp[v[i]]++;
	}
	ll ans=0,mx=-1,cnt=-1;
	auto it=mp.begin();
	while(it!=mp.end()){
		if(mx==-1){
			ans+=it->ss;
			mx=it->ff;
			cnt=it->ss;
		}
		else if(it->ff-1==mx){
			ans+=max(0LL,it->ss-cnt);
			mx=it->ff;
			cnt=it->ss;
		}
		else{
			ans+=it->ss;
			cnt=it->ss;
			mx=it->ff;
		}
		it++;
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