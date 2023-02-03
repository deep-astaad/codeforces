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
	vll v(n),idx(n);
	for (ll i = 0; i < n; ++i)
	{
		cin>>v[i];
		idx[v[i]-1]=i;
	}
	ll i=n/2,j=-1;
	ll ans=n/2;
	if(n%2==1){ 
		j=i+2;
	}
	else{ 
		j=i+1;
	}
	ll mn=LLONG_MAX,mx=LLONG_MIN;
	if(n%2==1){
		mn=idx[n/2];
		mx=mn;
	}
	while(i>0 && j<=n){
		if((idx[i-1]<idx[j-1]) && (idx[i-1]<mn && idx[j-1]>mx)){
			ans--;
			mn=min(mn,idx[i-1]);
			mx=max(mx,idx[j-1]);
			i--;
			j++;
		}
		else{
			break;
		}
	}
	cout<<ans<<nn;
	return;
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