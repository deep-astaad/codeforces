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

#define TESTCASE
void solve()
{
	int n,l,r;
	cin>>n>>l>>r;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}

	sort(all(v));
	int cnt=0;
	for (int i = 0; i < n; ++i)
	{
		if(v[i]>r) break;
		auto it1 = lower_bound(all(v), l-v[i]);
		auto it2 = upper_bound(all(v), r-v[i]);
		it2--;
		if(it1!=v.end()){ 
			// cout<<i<<' '<<it2-it1+1<<nn;
			cnt+=it2-it1+1;
			if(v[i]>=l-v[i] && v[i]<=r-v[i]) cnt--;
		}
	}

	cout<<cnt/2<<nn;
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