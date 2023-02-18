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
	ll n,c; cin>>n>>c;
	vll v(n);
	vll pr(n),sf(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	ll mnpr=0;
	for (int i = 0; i < n; ++i)
	{
		pr[i]=i+v[i]+1;
		if(pr[mnpr]>pr[i]){
			mnpr=i;
		}
	}
	for (int i = n-1; i >= 0; --i)
	{
		sf[i]=v[i]+n-i;
	}
	vll final;
	// final.push_back(pr[mnpr]);
	for (int i = 0; i < n; ++i)
	{
		// if(i==mnpr) continue;

		final.push_back(min(pr[i],sf[i]));
	}
	sort(all(final));
	
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<final[i]<<sp;
	// }
	// nl;
	ll ans=0;
	for (int i = 0; i < n; ++i)
	{
		if(final[i]<=c){
			c-=final[i];
			ans++;
		}
		else{
			break;
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