/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

void solve()
{
	int n,k; cin>>n>>k;
	string s; cin>>s;
	set<char> st;
	for (int i = 0; i < k; ++i)
	{
		char ch; cin>>ch;
		st.insert(ch);
	}
	int ans = 0, temp = 0;
	for (int i = 0; i < n; ++i)
	{
		if(st.count(s[i])){
			temp++;
		}
		else{
			ans+=((temp)*(temp+1))/2;
			temp=0;
		}
	}
	ans+=((temp)*(temp+1))/2;
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