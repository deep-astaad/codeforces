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
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

// #define TESTCASE
void solve()
{
	int n; cin>>n;
	vll a(n),b(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		v[i]=a[i]-b[i];
	}
	sort(all(v));
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<v[i]<<sp;
	// }
	int ans=0;
	for (int i = 0; i < n; ++i)
	{
		ans+=n-((upper_bound(all(v), (0-v[i])))-v.begin());
		if(v[i]>0) ans--;
	}
	cout<<ans/2;
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