/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	string s; cin>>s;
	int ans=0, temp=0;
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i]=='_') temp++;
		else{
			ans+=max(temp-1,0LL);
			temp=0;
		}
	}
	ans+=max(temp-1,0LL);

	if(s.size()==1){
		if(s[0]=='_') ans+=2;
		else ans++;
	}
	else{
		if(s[0]!='^') ans++;
		if(s[s.size()-1]!='^') ans++;
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