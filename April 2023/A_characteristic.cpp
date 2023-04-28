/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define ll long long
#define vll vector <long long>
#define all(x) (x).begin(), (x).end()
#define vvll vector<vector<long long>>
#define pll pair<long long, long long>
#define vpll vector<pair<long long, long long>>
#define pb push_back
#define ff first
#define ss second
#define nl cout << '\n'
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl '\n'
const int mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*
A
*/

#define TESTCASE
void solve()
{
	int n,k;
	cin>>n>>k;
	for (int i = 1; i <= n; ++i)
	{
		if(((i*(i-1))/2)+(((n-i)*(n-i-1))/2)==k){
			cyes;
			for (int j = 0; j < i; ++j)
			{
				cout<<'1'<<' ';
			}
			for (int j = 0; j < n-i; ++j)
			{
				cout<<-1<<' ';
			}
			nl;
			return;
		}
	}
	cno;

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