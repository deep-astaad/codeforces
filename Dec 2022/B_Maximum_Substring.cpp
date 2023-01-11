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
	string s; cin>>s;
	ll cntz=0,cnto=0;
	for (int i = 0; i < n; ++i)
	{
		if(s[i]=='0') cntz++;
		else cnto++;
	}
	ll mx=0,cnt=0;
	bool flag=false;
	for (int i = 0; i < n; ++i)
	{
		if(flag && s[i]!='0'){
			mx=max(mx,cnt);
			cnt=0;
			flag = false;
		}
		else if(s[i]=='0'){
			flag=true;
			cnt++;
		}
	}
	mx=max(cnt,mx);
	cnt=0;
	flag=false;
	for (int i = 0; i < n; ++i)
	{
		if(flag && s[i]!='1'){
			mx=max(mx,cnt);
			cnt=0;
			flag = false;
		}
		else if(s[i]=='1'){
			flag=true;
			cnt++;
		}
	}
	mx=max(cnt,mx);
	cout<<max(mx*mx,cntz*cnto)<<nn;
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