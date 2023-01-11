// Author : deep_aman (astaad)
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

const unsigned int M = 1000000007;

void solve()
{
	ll n; cin>>n;
	vll v(n);
	unordered_map<ll,ll> mp;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		mp[v[i]]++;
	}
	if (mp.size()>2)
	{
		cout<<n<<nn;
	}
	else{
		cout<<n/2 + 1<<nn;
	}
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