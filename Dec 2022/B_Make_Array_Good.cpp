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
	vll a(n);
	map<ll,vll> mp;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		a[i]=v[i];
		mp[v[i]].push_back(i);
	}
	ll last=mp.begin()->first;
	for(auto it : mp){
		for(ll i:it.second){
			if(v[i]%last!=0){
				v[i]=((v[i]/last)+1)*last;
				last=v[i];
			}
			else{
				last=max(last,v[i]);
			}
		}
	}

	ll cnt=0;
	for (int i = 0; i < n; ++i)
	{
		if(v[i]!=a[i]) cnt++;
	}
	cout<<cnt<<nn;

	for (int i = 0; i < n; ++i)
	{
		if(v[i]!=a[i]){
			cout<<i+1<<sp;
			cout<<v[i]-a[i]<<nn;
		}
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