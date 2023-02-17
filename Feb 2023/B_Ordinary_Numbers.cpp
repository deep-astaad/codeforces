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



*/
string getString(ll n) {
	string s = "";
	while (n) {
		s += ('0' + n % 10);
		n /= 10;
	}
	reverse(s.begin(), s.end());
	return s;
}
void solve()
{
	ll n; cin >> n;
	string s = getString(n);
	ll len = s.size();
	ll ans = (len - 1) * 9LL;
	ans += max(0LL, s[0] - '0' - 1LL);
	for (int i = 1; i < len; ++i)
	{
		if (s[i] > s[0]) {
			cout << ans + 1 << nn;
			return;
		}
		else if (s[i] < s[0]) {
			cout << ans << nn;
			return;
		}
	}
	cout << ans + 1 << nn;
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