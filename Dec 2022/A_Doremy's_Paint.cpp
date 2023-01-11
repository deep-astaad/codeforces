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

	ll f=-1,l=-1;
	for (int i = 0; i < n; ++i)
	{
		if(mp[v[i]]!=1){
			f=i;
			break;
		}
	}
	if(f==-1){
		cout<<1<<sp<<n<<nn;
	}
	else{
		for(int i=n-1;i>=0;i--){
			if(mp[v[i]]!=1){
				l=i;
				break;
			}
		}
		cout<<f+1<<sp<<l+1<<nn;
		// unordered_set<ll> st;
		// for (int i = f; i <= l; ++i)
		// {
		// 	st.insert(v[i]);
		// }
		// cout<<l-f-st.size()<<nn;
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