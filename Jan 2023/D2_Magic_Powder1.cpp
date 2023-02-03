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
	ll n,k;
	cin>>n>>k;
	vll a(n),b(n);
	map<ll,vector<pair<ll,ll>>> mp;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
		ll d=b[i]/a[i];
		ll r=b[i]%a[i];
		mp[d].push_back({a[i],r});
	}
	// for(auto &it:mp){
	// 	cout<<it.ff<<" : ";
	// 	for(auto &p:it.second){
	// 		cout<<"{"<<p.ff<<","<<p.ss<<"}"<<sp;
	// 	}
	// 	nl;
	// }
	// nl;
	auto it=mp.begin();
	while(k>0 && it!=mp.end()){
		if(k==0) break;
		for(auto &p:it->ss){
			if(p.first-p.second>k){
				cout<<it->ff<<nn;
				return;
			}
			else{
				k-=p.first-p.second;
				mp[it->first+1].push_back({p.first,0});
			}
		}
		it++;
	}
	cout<<it->first;
	// nl;
	// for(auto &it:mp){
	// 	cout<<it.ff<<" : ";
	// 	for(auto &p:it.second){
	// 		cout<<"{"<<p.ff<<","<<p.ss<<"}"<<sp;
	// 	}
	// 	nl;
	// }
	
}

int main()
{
    ll testcase;
    testcase = 1;
    // cin >> testcase;
    while (testcase--)
    {
		solve();
    }
    return 0;
}