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
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	int mx=0;
	int mn = ~(1<<15);
	// cout<<mx<<nn;
	// cout<<(mx|5)<<nn;
	// cout<<mx<<sp<<mn;
	for (int i = 0; i < n; ++i)
	{
		mx = mx|v[i];
		// cout<<mx<<nn;
		mn = mn&v[i];
		// cout<<mx<<sp<<mn<<nn;
	}
	// cout<<mx<<sp<<mn<<nn;
	cout<<mx-mn<<nn;
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