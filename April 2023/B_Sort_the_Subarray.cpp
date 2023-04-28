/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	int n; cin>>n;
	vector<int> v(n), t(n);

	for (int i = 0; i < n; ++i) cin>>v[i];

	for (int i = 0; i < n; ++i) cin>>t[i];

	int l=-1,r=-1;
	for (int i = 0; i < n; ++i)
	{
		if(v[i]!=t[i]){
			if(l==-1) l=i+1;
			r=i+1;
		}
	}

	int tl=l-1, tr=r-1;

	while(tl-1>=0){
		if(t[tl-1]<=t[tl]) tl--;
		else break;
	}

	while(tr+1<n){
		if(t[tr+1]>=t[tr]) tr++;
		else break;
	}
	
	cout<<tl+1<<' '<<tr+1<<'\n';

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