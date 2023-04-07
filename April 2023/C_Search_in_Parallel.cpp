/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
	int n,s1,s2; cin>>n>>s1>>s2;
	vector<pair<int,int>> vp;
	for (int i = 0; i < n; ++i)
	{
		int x; cin>>x;
		vp.push_back({x,i+1});
	}
	sort(vp.begin(),vp.end()); 
	reverse(vp.begin(),vp.end());
	int t1=0,t2=0;
	vector<int> robot1,robot2;
	for (int i = 0; i < n; ++i)
	{
		if(t1+s1<t2+s2){
			robot1.push_back(vp[i].second);
			t1+=s1;
		}
		else{
			robot2.push_back(vp[i].second);
			t2+=s2;
		}
	}
	cout<<robot1.size()<<' ';
	for (int i = 0; i < robot1.size(); ++i)
	{
		cout<<robot1[i]<<' ';
	}
	cout<<'\n';
	cout<<robot2.size()<<' ';
	for (int i = 0; i < robot2.size(); ++i)
	{
		cout<<robot2[i]<<' ';
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