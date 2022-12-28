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
	ll mn=LLONG_MAX,mx=LLONG_MIN;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		mn=min(mn,v[i]);
		mx=max(mx,v[i]);
	}
	ll cnmn=0,cnmx=0;
	for (int i = 0; i < n; ++i)
	{
		if(v[i]==mn) cnmn++;
		if(v[i]==mx) cnmx++;
	}
	if(mn==mx){
		cout<<cnmn*(cnmn-1)<<nn;
		return;
	}
	cout<<cnmn*cnmx*2<<nn;

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