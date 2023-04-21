/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	int n,m; cin>>n>>m;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) cin>>v[i];
	sort(v.begin(),v.end());
	while(m--){
		int a,b,c; cin>>a>>b>>c;
		int val=4*a*c;
		int idx=(lower_bound(v.begin(),v.end(),b)-v.begin());
		if(idx<n && idx>=0 && (v[idx]-b)*(v[idx]-b)<val){
			cout<<"Yes\n";
			cout<<v[idx]<<'\n';
		}
		else if(idx-1>=0 && (v[idx-1]-b)*(v[idx-1]-b)<val){
			cout<<"Yes\n";
			cout<<v[idx-1]<<'\n';
		}
		else if(idx+1<n && (v[idx+1]-b)*(v[idx+1]-b)<val){
			cout<<"Yes\n";
			cout<<v[idx+1]<<'\n';
		}
		else cout<<"No\n";
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