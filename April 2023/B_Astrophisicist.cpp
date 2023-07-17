/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define ll long long
#define vll vector <long long>
#define all(x) (x).begin(), (x).end()
#define pll pair <long long, long long>
#define vvll vector <vector <long long>>
#define vpll vector <pair <long long, long long>>
#define pb push_back
#define ff first
#define ss second
#define sp ' '
#define endl '\n'
#define nl cout << '\n'
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define nn '\n'
const ll mod = 1e9 + 7;

#define TESTCASE

void solve()
{
	int n,k,g; cin>>n>>k>>g;

	int tt = g/2;
	if(g%2) tt++;

	int r = max(tt-1, 0LL);
	int total = k*g;
	int temp = min(n*r, total - (total%r));

	int ans=0;
	int left = total - temp;
	left%=g;

	if(r+left >= tt) ans = (n-1)*r - g;
	else ans = (n-1)*r + ((r+left)%g);

	cout<<max(ans, 0LL)<<nn;

}

int32_t main()
{
	deep_aman;
	int testcase = 1;
	#ifdef TESTCASE
		cin >> testcase;
	#endif
	while (testcase--) solve();
	return 0;
}