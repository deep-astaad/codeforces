/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	string s; cin>>s;
	int sol=LLONG_MAX;
	for (int i = 0; i < 26; ++i)
	{
		char c='a'+i;
		int ans=0;
		int temp=0;
		for (int j = 0; j < s.size(); ++j)
		{
			if(s[j]==c){
				ans=max(ans, temp);
				temp=0;
			}
			else temp++;
		}
		ans=max(ans, temp);
		int idx=0;
		while(ans){
			idx++;
			ans>>=1;
		}
		sol=min(sol, idx);
	}
	cout<<sol<<'\n';
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