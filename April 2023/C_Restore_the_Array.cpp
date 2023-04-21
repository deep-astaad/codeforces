/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	int n; cin>>n;
	vector<int> v(n-1);
	for (int i = 0; i < n-1; ++i)
	{
		cin>>v[i];
	}
	if(n==2){
		cout<<v[0]<<' '<<v[0]<<'\n';
		return;
	}
	vector<int> ans;

	if(v[0]<v[1]){
		ans.push_back(v[0]);
		for (int i = 0; i < n-1; ++i)
		{
			if(ans.back()==v[i] && i+1<n-1 && v[i+1]<v[i]) ans.push_back(v[i+1]);
			else ans.push_back(v[i]);
		}
	}
	else{
		// bool flag=false;
		ans.push_back(v[0]);
		for (int i = 0; i < n-1; ++i)
		{
			// if(flag){
			// 	if(ans.back()==v[i] && i+1<n-1 && v[i+1]<v[i]){
			// 		ans.push_back(v[i+1]);
			// 	}
			// 	else{
			// 		ans.push_back(v[i]);
			// 	}
			// }
			if(i+1<n-1 && v[i+1]<v[i]){
				ans.push_back(v[i+1]);
			}
			else if(i+1<n-1 && v[i+1]>v[i]){
				// flag=true;
				ans.push_back(v[i]);
			}
			else ans.push_back(v[i]);
		}
		// if(!flag) ans.push_back(v[n-2]);
	}
	for (int i = 0; i < ans.size(); ++i)
	{
		cout<<ans[i]<<' ';
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