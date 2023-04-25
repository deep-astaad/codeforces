/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define ll long long
#define vll vector <long long>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define nl cout << '\n'
#define nn '\n'

#define TESTCASE
void solve()
{
	int n; cin>>n;
	string s; cin>>s;
	vector<int> fq(26);
	for (int i = 0; i < s.size(); ++i)
		fq[s[i]-'a']++;

	sort(fq.begin(), fq.end());
	reverse(fq.begin(), fq.end());
	
	if(n&1) cout<<-1;
	else if(fq[0]>n/2) cout<<-1;
	else{
		vector<int> t(26);
		int cnt=0;
		for (int i = 0; i < n/2; ++i) {
			if(s[i]==s[n-i-1]) t[s[i]-'a']++, cnt++;
		}

		sort(t.begin(), t.end());
		reverse(t.begin(), t.end());

		int ans=0;
		if(t[0]>cnt/2){
			int rest=cnt-t[0];
			ans=rest;
			ans+=t[0]-rest;
		}
		else ans = (cnt/2) + (cnt%2);

		cout<<ans;
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