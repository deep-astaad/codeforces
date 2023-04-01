/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define TESTCASE
void solve()
{
	int n; cin>>n;
	vector<int> v(40,1);
	if(n%2==0){
		cout<<-1<<'\n';
		return;
	}
	int t=n/2, i=0;
	while(t){
		if((t&1)==1) v[i]=2;
		i++, t/=2;
	}
	reverse(v.begin(),v.end());
	cout<<40<<'\n';
	for(auto it : v) cout<<it<<' ';
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