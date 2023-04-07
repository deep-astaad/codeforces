/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

int power(int b, int p) {
	int ans=1;
	for (int i = 0; i < p; ++i)
	{
		ans *= b;
	}
	return ans;
}

int s2i(string s){
	int ans=0;
	for (int i = 0; i < s.size(); ++i)
	{
		ans=(ans*10)+(s[i]-'0');
	}
	return ans;
}

int find_pos(string s, int idx){
	if(idx == s.size()) {
		return 0;
	}
	int ans = 0;
	int x = s[idx] - '0';
	if(x > 4){
		ans += (x - 1)*power(9, s.size() - idx - 1);
		ans += find_pos(s, idx + 1);
	}
	else{
		ans += (x) * power(9, s.size() - idx - 1);
		ans += find_pos(s, idx + 1);
	}
	return ans;
}

#define TESTCASE
void solve()
{
	int n; cin>>n;
	string s= to_string(n);
	int ans=0;
	int l=1,h=1e18;
	while(l<=h){
		int mid=l+(h-l)/2;
		string s=to_string(mid);
		bool ok=false;
		for (int i = 0; i < s.size(); ++i)
		{
			if(ok) s[i]='9';
			else if(s[i]=='4') s[i]='3',ok=true;
		}
		int pos=find_pos(s,0);
		if(pos==n){
			cout<<s2i(s)<<'\n';
			return;
		}
		else if(pos<n){
			l=mid+1;
		}
		else h=mid-1;
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