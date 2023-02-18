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
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
//-------------------------------------------------------------------------------//
const ll M = 1e9 + 7;
/*
write code for all 4 possible lengths


*/
void solve()
{
	ll n; cin >> n;
	string a; cin >> a;
	for (int i = 0; i < n - 1; ++i)
	{
		if (a[i] == a[i + 1] && a[i] == 'a') {
			cout << 2 << nn;
			return;
		}
	}
	for (int i = 0; i < n - 2; ++i)
	{
		if (a[i] == a[i + 2] && a[i] == 'a') {
			cout << 3 << nn;
			return;
		}
	}
	for (int i = 0; i < n - 3; ++i)
	{
		if (a[i] == a[i + 3] && a[i] == 'a' && ((a[i + 1] == 'b' && a[i + 2] == 'c') || (a[i + 1] == 'c' && a[i + 2] == 'b'))) {
			cout << 4 << nn;
			return;
		}
	}
	for (int i = 0; i < n - 6; ++i)
	{
		ll cnt_a = 0, cnt_b = 0, cnt_c = 0;
		for (int j = i; j < i + 7; ++j)
		{
			if (a[j] == 'a') cnt_a++;
			else if (a[j] == 'b') cnt_b++;
			else cnt_c++;
		}
		// cout<<cnt_a<<sp<<cnt_b<<sp<<cnt_c<<nn;
		if (cnt_a > cnt_b && cnt_a > cnt_c) {
			cout << 7 << nn;
			return;
		}
	}
	cout << -1 << nn;

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