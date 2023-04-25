/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	string s; cin>>s;

	int cnt=0;
	for(auto it : s)
	{
		if(it=='?') cnt++;
	}

	if(s[0]=='0') cout<<0<<'\n';
	else if(s[0]=='?') cout<<9*pow(10,cnt-1)<<'\n';
	else cout<<pow(10,cnt)<<'\n';

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