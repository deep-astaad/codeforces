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
	ll n,m; cin>>n>>m;
	vll a(n),c(m);
	vll choice(n+1);
	priority_queue<ll> pq;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		choice[a[i]]++;
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>c[i];
	}
	sort(all(c));
	sort(all(choice));
	reverse(all(c));
	reverse(all(choice));
	for (int i = 0; i <= n+1; ++i)
	{
		if(choice[i]==0) break;
		pq.push(choice[i]);
	}
	ll ans=0;
	ll i=0;
	while(pq.empty()==false && i<m){
		ll chr=pq.top();
		pq.pop();
		if(chr>=c[i]){
			ans+=min(chr,c[i]);
			pq.push(chr-c[i]);
		}
		else{
			ans+=min(chr,c[i]);
		}
		i++;
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