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
#define c(x) cout<<x<<"\n"
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
	string s; cin>>s;
	map<char,ll> mp;
	for (int i = 0; i < n; ++i)
	{
		mp[s[i]]++;
	}
	for(auto it:mp){
		cout<<it.ff<<sp<<it.ss<<nn;
	}
	nl;
	vll v;
	for (int i = 1; i*i <= n; ++i)
	{
		if(n%i==0){
			v.push_back(n/i);
			v.push_back(i);
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<sp;
	}
	nl;
	nl;
	ll mn=LLONG_MAX;
	for (int i = 0; i < v.size(); ++i)
	{
		ll ls=0,gt=0;
		vector<pair<ll,char> del;
		vector<pair<ll,char> add;
		for(auto it:mp){
			ll tdel=0;
			if(it.ss<v[i]){
				add.push_back(v[i]-it.ss,it.ff);
			}
			else if(it.ss>v[i]){
				del.push_back(it.ss-v[i],it.ff);
				tdel+=it.ss-v[i];
			}
		}
		sort(all(del));
		sort(all(add));
		vector<pair<ll,char> added;
		vll prefix(add.size());
		for (int j = 0; j < add.size(); ++j)
		{
			if(j==0){
				prefix[j]=add[j].ff;
				continue;
			}
			prefix[j]=prefix[j-1]+add[j].ff;
		}
		int idx=-1;
		for (int j = 0; j < add.size(); ++j)
		{
			if(tdel==0) {idx=j; break;}
			if(add[j].ff<=tdel) {
				added.push_back(add[j]);
				tdel-=add[j].ff;
			}
			else{
				idx=j;
				add[j].ff-=tdel;
			}
		}
		
		ll total=0;
		for (int i = idx; i < add.size(); ++i)
		{
			
		}
		// mn=min(mn,tt);
		// ls=7
		// gt=3
		// gt+(ls-gt)/2
		cout<<gt<<sp<<ls<<nn;
	}
	nl;
	// cout<<mn<<nn;
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