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
CHECK IF "not" IS PRESENT IN STATEMENT
either in reverse oreder 
or gap > d

"Not good" ne kiya dhamaaaaal
*/
void solve()
{
	ll n,m,d; cin>>n>>m>>d;
	vll v(n);
	vll idx(n+1);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		idx[v[i]]=i+1;
	}
	vll a(m);
	for (int i = 0; i < m; ++i)
	{
		cin>>a[i];
	}
	ll ans=LLONG_MAX;
	for (int i = 0; i < m-1; ++i)
	{
		if(idx[a[i]]>idx[a[i+1]] || idx[a[i]]+d<idx[a[i+1]]) {
			ans=0;
			break;
		}
		if(d<n-1 && d+1-(idx[a[i+1]]-idx[a[i]])<idx[a[i+1]]-idx[a[i]]){
			ans=min(ans,d+1-(idx[a[i+1]]-idx[a[i]]));
		}
		else{
			ans=min(ans,idx[a[i+1]]-idx[a[i]]);
		}
	}
	cout<<ans<<nn;
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