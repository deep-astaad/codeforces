/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int


int power(int b, int p){
	int ans=1;
	for (int i = 0; i < p; ++i)
	{
		ans*=b;
	}
	return ans;
}

void solve()
{
	int n; cin>>n;	
	if(n%2) cout<<0;
	else cout<<power(2,n/2);
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