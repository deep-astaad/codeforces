/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	int n; cin>>n;
	vector <long long> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	int xr=0;
	for (int i = 0; i < n; ++i)
	{
		xr^=v[i];
	}
	if(n%2==0){
		if(xr==0){
			cout<<0;
		}
		else{
			cout<<-1;
		}
	}
	else{
		cout<<xr;
	}
	cout<<'\n';

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