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
#define nl cout<<nn

const unsigned int M = 1000000007;

void solve()
{
	ll n; cin>>n;
	if(n&1){
		for (int i = 0; i < n; ++i)
		{
			cout<<n<<sp;
		}
	}
	else{
		if(n>2){
			cout<<2<<sp<<4<<sp;
			ll x = ((2^4)*n - 6 - (n-4))/2;
			for (int i = 0; i < n-4; ++i)
			{
				cout<<1<<sp;
			}
			cout<<x<<sp<<x;
		}
		else{
			cout<<2<<sp<<6;
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