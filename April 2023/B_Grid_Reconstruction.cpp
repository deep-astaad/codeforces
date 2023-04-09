/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	int n; cin>>n;
	int l=2,h=2*n;
	for (int i = 0; i < n; ++i)
	{
		if(i%2==0){
			cout<<h<<' ';
			h-=2;
		}
		else{
			cout<<l<<' ';
			l+=2;
		}
	}
	nl;
	l=1,h++;
	for (int i = 0; i < n; ++i)
	{
		if(i%2==0){
			cout<<l<<' ';
			l+=2;
		}
		else{
			cout<<h<<' ';
			h+=2;
		}
	}
	nl;
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