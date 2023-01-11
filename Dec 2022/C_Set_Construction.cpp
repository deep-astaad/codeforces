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
	vector<string> b(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}
	vector<vll> v(n);
	for (int i = 0; i < n; ++i)
	{
		v[i].push_back(i+1);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(b[i][j]=='1'){
				v[j].push_back(i+1);
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<v[i].size()<<sp;
		for (int j = 0; j < v[i].size(); ++j)
		{
			cout<<v[i][j]<<sp;
		}
		nl;
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