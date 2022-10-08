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
	vll a(n);
	vll b(n);
	
	vll z,o;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<a[i]<<b[i];
	// }

	for (int i = 0; i < n; ++i)
	{
		if (a[i]==0)
		{
			z.push_back(b[i]);
		}
		else{
			o.push_back(b[i]);
		}
	}
	sort(all(z));
	sort(all(o));
	// for (int i = 0; i < z.size(); ++i)
	// {
	// 	cout<<z[i]<<sp;
	// }
	// for (int i = 0; i < o.size(); ++i)
	// {
	// 	cout<<o[i]<<sp;
	// }
	// ll val = min(z.size(),o.size());
	ll ans=0;
	if (z.size()<o.size())
	{
		for (int i = 0; i < z.size(); ++i)
		{
			ans+=2*z[i];
		}
		// cout<<ans<<sp;
		ll i=o.size()-z.size();
		while(i < o.size()){
			ans+=2*o[i];
			i++;
		}
		// cout<<ans<<sp;
		for (int i = 0; i < o.size()-z.size(); ++i)
		{
			ans+=o[i];
		}
		// cout<<ans<<sp;
	}
	else if(z.size()==o.size()){
		if(z[0]>o[0]){
			for (int i = 1; i < z.size(); ++i)
			{
				ans+=2*z[i];
				ans+=2*o[i];
			}
			ans+=o[0];
			ans+=2*z[0];
		}
		else{
			for (int i = 1; i < z.size(); ++i)
			{
				ans+=2*z[i];
				ans+=2*o[i];
			}
			ans+=z[0];
			ans+=2*o[0];
		}
	}
	else{
		for (int i = 0; i < o.size(); ++i)
		{
			ans+=2*o[i];
		}
		// cout<<ans<<sp;
		ll i=z.size()-o.size();
		while(i < z.size()){
			ans+=2*z[i];
			i++;
		}
		// cout<<ans<<sp;
		for (int i = 0; i < z.size()-o.size(); ++i)
		{
			ans+=z[i];
		}
	}
	cout<<ans<<nn;
	// cout<<nn;
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