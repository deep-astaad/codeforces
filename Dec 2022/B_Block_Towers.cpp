// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define deb(x); cout << #x << " = " << x << endl;
#define cyes cout<<"YES"<<"\n"
#define cno cout<<"NO"<<"\n"
#define sp " "
#define nn "\n"
#define nl cout<<nn;

const unsigned int M = 1000000007;

void solve()
{
	ll n; cin>>n;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	sort(v.begin()+1,v.end());
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<v[i]<<sp;
	// }
	// nl;
	ll ans=0;
	for (int i = 1; i < n; ++i)
	{
		ll cnt=0;
		cnt=(v[0]+v[i])/2;
		if((v[0]+v[i])%2==1) cnt++;
		v[0]=max(v[0],cnt);
	}
	cout<<v[0]<<nn;
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