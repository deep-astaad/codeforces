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
	ll n; cin>>n;
	vll v(n);
	ll sm=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		sm+=v[i];
	}
	ll cnt1=0,cnt2=0;
	for (int i = 0; i < n-1; ++i)
	{
		if(v[i]==-1 && v[i+1]==-1){
			cnt1++;
		}
		if(v[i]==1 && v[i+1]==-1){
			cnt2++;
		}
		if(v[i]==-1 && v[i+1]==1){
			cnt2++;
		}
	}
	if(cnt1>0){
		cout<<sm+4<<nn;
	}
	else if(cnt2>0){
		cout<<sm<<nn;
	}
	else{
		cout<<sm-4<<nn;
	}
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