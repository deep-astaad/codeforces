// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
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
//-------------------------------------------------------------------------------//
const ll M = 1e9 + 7;
/*


*/
void solve()
{
	ll n, k; cin >> n >> k;
	for (int i = 0; i < k - 3; ++i)
	{
		cout << 1 << sp;
	}
	n -= k - 3;
	ll val = n / 2;
	if (n % 3 == 0) {
		cout << n / 3 << sp << n / 3 << sp << n / 3 << nn;
	}
	else if (n % 2) {
		cout << 1 << sp << n / 2 << sp << n / 2 << nn;
	}
	else if (n % 2 == 0 && n % 4) {
		cout << 2 << sp << (n - 1) / 2 << sp << (n - 1) / 2 << nn;
	}
	else {
		cout << n / 4 << sp << n / 4 << sp << n / 2 << nn;
	}
}

int main()
{	ios

	ll testcase;
	testcase = 1;
	cin >> testcase;
	while (testcase--)
	{
		solve();
	}
	return 0;
}
/*
3
1 1 1
4
2 1 1
5
2 2 1
6
2 2 2
7
3 3 2
8
4 2 2
9
4 4 1
10
4 4 2
11
8 2 1
12
2 2 8
4 4 4
13
8 4 1
14
2 4 8
8 4 2
16
4 4 8
38
32 4 2


*/