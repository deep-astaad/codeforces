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
	ll n,k;
	cin>>n>>k;
	vll v(n);
	vll p(n);
	map<ll,ll> mp;
	vpll vp;
	ll mx=LLONG_MIN;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		mx=max(mx,v[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>p[i];
	}
	for (int i = 0; i < n; ++i)
	{
		vp.push_back(make_pair(p[i],v[i]));
		if(mp.find(p[i])!=mp.end()){
			mp[p[i]]=max(mp[p[i]],v[i]);
		}
		else mp[p[i]]=v[i];
	}
	sort(all(vp));
	ll minus=k;
	for (int i = 0; i < vp.size(); ++i)
	{
		if(minus<vp[i].second){
			while(vp[i].second>minus){
				k-=vp[i].first;
				if(k<0) break;
				minus+=k;
			}
		}
		if(k<0) break;

	}
	if(minus<mx){
		cno;
		return;
	}
	cyes;
	// ll minus=k;
	// ll sum=0;
	// bool flag=false;
	// while(mp.size()!=0 && k>0){
	// 	sum+=k;
	// 	ll x = mp.begin()->second;
	// 	if(flag) x-=(minus);
	// 	x -= k;
	// 	mp.begin()->second=max(0LL,x);
	// 	if(x<=0){
	// 		flag=true;
	// 		mp.erase(mp.begin()->first);
	// 		minus+=k;
	// 	}
	// 	else{
	// 		flag=false;
	// 	}
	// 	if(mp.size()==0) break;
	// 	k-=mp.begin()->first;
	// }
	// for (int i = 0; i < n; ++i)
	// {
	// 	if(v[i]>sum){
	// 		cno;
	// 		return;
	// 	}
	// }
	// cyes;
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