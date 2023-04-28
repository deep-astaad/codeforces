/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define TESTCASE
void solve()
{
	int k,n,m; cin>>k>>n>>m;
	vector<int> v1(n), v2(m), v;

	for (int i = 0; i < n; ++i)
		cin>>v1[i];

	for (int i = 0; i < m; ++i)
		cin>>v2[i];

	int i=0, j=0;
	while(i<n && j<m){
		if(v1[i]==0){
			v.push_back(0);
			k++, i++;
		}
		else if(v2[j]==0){
			v.push_back(0);
			k++, j++;
		}
		else if(v1[i]<=k) v.push_back(v1[i++]);
		else if(v2[j]<=k) v.push_back(v2[j++]);
		else{
			cout<<-1<<'\n';
			return;
		}
	}

	while(i<n){
		if(v1[i]==0){
			k++;
			i++;
			v.push_back(0);
		}
		else if(v1[i]<=k) v.push_back(v1[i++]);
		else{
			cout<<-1<<'\n';
			return;
		}
	}

	while(j<m){
		if(v2[j]==0){
			k++;
			j++;
			v.push_back(0);
		}
		else if(v2[j]<=k) v.push_back(v2[j++]);
		else{
			cout<<-1<<'\n';
			return;
		}
	}

	for(auto it : v)
		cout<<it<<' ';
	
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

