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
	vvll v(n,vll(n-1));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-1; ++j)
		{
			cin>>v[i][j];
			// cout<<v[i][j]<<sp;
		}
		// nl;
	}
	vll ans(n);
	for (int j = 0; j < n-1; ++j)
	{
		map<ll,ll> mp;
		for (int i = 0; i < n; ++i)
		{
			mp[v[i][j]]++;
		}
		if(j>0){
			if(mp.begin()->ff==ans[j]){
				ans[j+1]=mp.rbegin()->ff;
				// mp[ans[j]]++;
				// mp[mp.rbegin()->ff]--;
			}
			else{
				ans[j+1]=mp.begin()->ff;
				// mp[ans[j]]++;
				// mp[mp.begin()->ff]--;
			}
			continue;
		}
		if(mp.size()==1){
			if(j==0){
				ans[j]=mp.begin()->ff;
			}
			ans[j+1]=mp.begin()->ff;
		}
		else{
			if(mp.begin()->ss>mp.rbegin()->ss){
				if(j==0){
					ans[j]=mp.begin()->ff;
				}
				ans[j+1]=mp.rbegin()->ff;
			}
			else{
				ans[j+1]=mp.begin()->ff;
				if(j==0){
					ans[j]=mp.rbegin()->ff;
				}
			}
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<ans[i]<<sp;
	}
	nl;
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