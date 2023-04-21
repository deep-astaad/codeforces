/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	int n, k;
	cin >> n >> k;
	vector<vector<int>> v(n, vector<int> (n));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> v[i][j];
		}
	}
	int u = 0, d = n-1, cnt = 0;
	while(u<d){
		int i = 0, j = n-1;
		while(i < n && j >= 0){
			if(v[u][i] != v[d][j]) cnt++;
			i++, j--;
		}
		u++, d--;
	}
	if(n%2 == 1){
		int i=0,j=n-1;
		while(i < j){
			if(v[n/2][i] != v[n/2][j]) cnt++;
			i++, j--;
		}
	}
	if(k < cnt) cout << "No\n";
	else{
		k -= cnt;
		if((k%2 == 0) || (n%2 == 1)) cout << "Yes\n";
		else cout << "No\n";
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