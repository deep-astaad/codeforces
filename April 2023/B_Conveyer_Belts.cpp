/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

#define TESTCASE
void solve()
{
	int n,x1,y1,x2,y2;
	cin>>n>>x1>>y1>>x2>>y2;
	int t1=min({x1,y1,n-x1+1,n-y1+1});
	int t2=min({x2,y2,n-x2+1,n-y2+1});
	cout<<abs(t1-t2)<<'\n';
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