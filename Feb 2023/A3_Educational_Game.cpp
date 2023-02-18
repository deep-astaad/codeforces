// Code by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define vll vector <ll>
#define pll pair<ll,ll>
#define vvll vector<vll>
#define vpll vector<pll>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define cyes cout<<"YES"<<"\n";
#define cno cout<<"NO"<<"\n";
#define sp " "
#define nn "\n"
#define endl "\n"
#define nl cout<<nn;
const ll mod = 1e9 + 7;
/*


*/
int maxJump(int n) {
	int ans = 1;
	while (n) {
		ans = ans << 1;
		n = n >> 1;
	}
	return ans >> 1;
}
void solve()
{
	ll n; cin >> n;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int prev = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		cout << prev + v[i] << nn;
		prev += v[i];
		int jump = maxJump(n - 1 - i);
		v[jump + i] += v[i];
	}
}

int32_t main()
{
	ios;
	solve();
	return 0;
}