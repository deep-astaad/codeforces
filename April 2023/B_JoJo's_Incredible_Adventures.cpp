/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	string s; cin>>s;
	int n=s.size();

	int mx=0, temp=0;
	for (int i = 0; i < n; ++i)
	{
		if(s[i]=='1') temp++;
		else mx=max(mx,temp), temp=0;
	}
	mx=max(mx,temp);

	if(mx!=n){
		int ts=0, te=0;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='1') ts++;
			else break;
		}

		for(int i = n-1; i >= 0; --i)
		{
			if(s[i]=='1')	te++;
			else break;
		}

		mx=max(mx, ts+te);
	}

	if(mx==n){
		cout<<n*n<<'\n';
		return;
	}
	int sm=mx+1;
	int ans=0;
	for (int i = 1; i <= mx; ++i)
	{
		ans=max(ans, i*(sm-i));
	}
	cout<<ans<<'\n';

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