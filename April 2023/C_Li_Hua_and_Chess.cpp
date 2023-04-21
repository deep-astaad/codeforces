/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	int n, m; cin>>n>>m;
	int x = 1, y = 1;

	int d1 = 0;
	cout<<"? "<<x<<' '<<y<<'\n';
	cout.flush();
	cin>>d1;

	x += d1, y += d1;

	if(x <= n && y <= m){
		cout<<"? "<<x<<' '<<y<<'\n';
		cout.flush();
		int d2 = 0;
		cin>>d2;

		cout<<"? "<<x<<' '<<y-d2<<'\n';
		cout.flush();
		int d3 = 0;
		cin>>d3;

		if(d3 == 0){
			cout<<"! "<<x<<' '<<y-d2<<'\n';
			cout.flush();
		}
		else{
			cout<<"! "<<x-d2<<' '<<y<<'\n';
			cout.flush();
		}
	}
	else if(x <= n){
		y = 1;
		cout<<"? "<<x<<' '<<y<<'\n';
		cout.flush();
		int d2; 
		cin>>d2;
		cout<<"! "<<x<<' '<<y+d2<<'\n';
		cout.flush();
	}
	else{
		x = 1;
		cout<<"? "<<x<<' '<<y<<'\n';
		cout.flush();
		int d2; 
		cin>>d2;
		cout<<"! "<<x+d2<<' '<<y<<'\n';
		cout.flush();
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