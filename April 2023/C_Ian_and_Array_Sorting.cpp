/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define cyes cout << "Yes\n"
#define cno cout << "No\n"

#define TESTCASE
void solve()
{
	int n; cin>>n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	int odd=0,even=0;
	for (int i = 0; i < n; ++i)
	{
		if(i%2==0) even+=v[i];
		else odd+=v[i];
	}
	if(n%2==1){
		cyes;
	}
	else{
		if(odd>=even) cyes;
		else cno;
	}
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