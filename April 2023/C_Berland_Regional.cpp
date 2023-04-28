/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	int n; cin>>n;
	vector<int> u(n), s(n);

	for (int i = 0; i < n; ++i)
		cin>>u[i];

	for (int i = 0; i < n; ++i)
		cin>>s[i];

	map<int, vector<int>> mp;
	for (int i = 0; i < n; ++i)
		mp[u[i]].push_back(s[i]);

	int total=0;
	vector<int> exact(n+1), onwords(n+2);
	for(auto it : mp) {
		vector<int> v = it.second;
		sort(v.begin(), v.end());
		int sz = v.size(), sum = 0;
		vector<int> pre(1);
 
		for (int i = 0; i < sz; ++i) {
			sum+=v[i];
			pre.push_back(sum);
		}
 
		for (int i = 1; i <= sz; ++i)
			exact[i]-=pre[(sz%i)];
 
		onwords[sz+1]-=sum;
		total+=sum;
	}

	for (int i = 1; i <= n; ++i)
		onwords[i]+=onwords[i-1];

	for (int i = 1; i <= n; ++i)
		cout<<total+exact[i]+onwords[i]<<' ';

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