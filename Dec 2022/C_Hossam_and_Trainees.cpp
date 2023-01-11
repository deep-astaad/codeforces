// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// #define int ll
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

const unsigned int M = 1e9+7;

vll primes;

void seive(){
	vll smallestPrimeFact(sqrt(M)+1LL);
	for (ll i = 0; i < smallestPrimeFact.size(); ++i)
	{
		smallestPrimeFact[i]=i;
	}
	for (ll i = 2; i*i <= smallestPrimeFact.size(); ++i)
	{
		if(smallestPrimeFact[i]==i){
			for (ll j = i*i; j <= smallestPrimeFact.size(); j+=i)
			{
				if (smallestPrimeFact[j]==j)
				{
					smallestPrimeFact[j]=i;
				}
			}
		}
	}
	for (ll i = 2; i < smallestPrimeFact.size(); ++i)
	{
		if (smallestPrimeFact[i]==i)
		{
			primes.push_back(i);
		}
	}
}

void solve()
{
	ll n; cin>>n;
	vll v(n);
	for (ll i = 0; i < n; ++i)
	{
		cin>>v[i];
	}

	unordered_set<ll> st;
	for (ll i = 0; i < n; ++i)
	{
		for (ll j=0;j<primes.size();j++)
		{
			if(v[i]%primes[j]==0){
				if(st.find(primes[j]) != st.end()){
					cyes;
					return;
				}
				else{
					st.insert(primes[j]);
				}
				while(v[i]%primes[j]==0){
					v[i]/=primes[j];	
				}
			}
		}
		if(v[i]!=1){
			if(st.find(v[i])!=st.end()){
				cyes;
				return;
			}
			st.insert(v[i]);
		}
		
		// for(auto it:st){
		// 	cout<<it<<sp;
		// }
	}
	cno;
}

int main()
{
	seive();
    ll testcase;
    testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
		solve();
    }
    return 0;
}