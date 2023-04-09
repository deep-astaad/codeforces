/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	int n,m; cin>>n>>m;
	int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;

	if((x1==1 && y1==1) || (x1==1 && y1==m) || (x1==n && y1==1) || (x1==n && y1==m)) cout<<2<<'\n';
	else if((x2==1 && y2==1) || (x2==1 && y2==m) || (x2==n && y2==1) || (x2==n && y2==m)) cout<<2<<'\n';
	else if(x1==1 || y1==1 || x1==n || y1==m) cout<<3<<'\n';
	else if(x2==1 || y2==1 || x2==n || y2==m) cout<<3<<'\n';
	else cout<<4<<'\n';
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