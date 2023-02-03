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
	}
	ll l=0,h=2*1e9;
	ll mid,tt=k;
	ll ans=0;
	while(l<=h){
		mid=l+(h-l)/2;
		tt=k;
		ll i;
		for (i = 0; i < n; ++i)
		{
			if(b[i]/a[i]<mid){
				if(tt<(mid-(b[i]/a[i]))*a[i]-(b[i]%a[i])){
					h=mid-1;
					break;
				}
				else{
					tt-=(mid-(b[i]/a[i]))*a[i]-(b[i]%a[i]);
				}
			}
		}
		if(i==n){ l=mid+1; ans=mid; }
		else h=mid-1;
	}
	cout<<ans<<nn;
	
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