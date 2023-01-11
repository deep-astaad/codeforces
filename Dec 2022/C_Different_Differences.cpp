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
	ll k,n; cin>>k>>n;
	ll curr=1;
	ll inc=1;
	bool flag=false;
	for (int i = 1; i <= k; ++i)
	{
		if(curr+i+k-i-1>n && !flag){
			flag = true;
		}
		if(flag){
			cout<<curr<<sp;
			curr++;
		}
		else{
			cout<<curr<<sp;
			curr+=i;
		}
	}
	nl;
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