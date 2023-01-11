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

const unsigned int M = 1000000007;

void solve()
{
	// dont know why but instead of division by 6, need to multiply val, where val= M/6, if(M%6) val++;
	// do not avoid equation solving, answers are different for each step (explore on this.............)
	// ans = 1+2 + 4+6 + 9+12 + 16+20 + ((n-1)^2+(n-1)^2+(n-1)) + n^2
	ll n; cin>>n;
	ll ans=0;
	ll val = M/6;
	if(M%6) val++;
	ans = n*(n+1)%M;
	ans = ((ans%M)*(((4*n)-1)%M))%M;
	ans = ((ans%M)*val)%M;
	ans %= M;
	ans =(2022*ans);
	cout<<ans%M<<nn;
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