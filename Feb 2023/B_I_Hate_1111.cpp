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
#define sp " "
#define nn "\n"
#define nl cout<<nn;
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
//-------------------------------------------------------------------------------//
const ll M = 1e9 + 7;
/*
111 is greater by 1 that 10*11
if number is divisible by 11 or 111 cyes
else



*/
void solve()
{
	ll n; cin >> n;
	// cout<<n/111<<sp<<(n%111)%11<<nn;
	// cout<<n/11<<sp<<n%11<<nn;
	if (n % 11 == 0 || n % 111 == 0) {
		cyes;
		return;
	}
	if ((n % 111) % 11 == 0) {
		cyes;
		return;
	}
	if ((n / 111) >= 11 - ((n % 111) % 11)) cyes;
	else cno;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll testcase;
	testcase = 1;
	cin >> testcase;
	while (testcase--)
	{
		solve();
	}
	return 0;
}