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
	ll ans=0;
	map<ll,ll> mp;
	for (int i = 2; i*i <= n; ++i)
	{
		if(n%i==0){
			while(n%i==0){
				mp[i]++;
				n/=i;
			}
		}
	}
	if(n!=1){
		mp[n]++;
		n/=n;
	}
	vpll vp;
	for(auto it:mp){
		vp.push_back({it.ff,it.ss});
	}
	while(vp.size()>0){
		vpll t;
		ll cnt=1;
		for(auto p:vp){
			cnt*=p.ff;
			if(p.ss>1){
				t.push_back({p.ff,p.ss-1});
			}
		}
		ans+=cnt;
		vp=t;
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