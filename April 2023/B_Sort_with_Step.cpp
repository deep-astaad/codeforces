/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define ll long long
#define vll vector <long long>
#define all(x) (x).begin(), (x).end()
#define vvll vector<vector<long long>>
#define pll pair<long long, long long>
#define vpll vector<pair<long long, long long>>
#define pb push_back
#define ff first
#define ss second
#define nl cout << '\n'
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl '\n'
const int mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*
B
*/

#define TESTCASE
void solve()
{
	int n,k; cin>>n>>k;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}

	if(k==1){
		cout<<0<<endl;
		return;
	}
	int cnt=0;
	for (int i = 0; i < k; ++i)
	{
		int m=(i+1)%k;
		for (int j = i; j < n; j+=k)
		{
			if(v[j]%k!=m%k){
				// cout<<m<<' '<<v[j]<<'\n';
				cnt++;}
		}
	}
	// cout<<cnt<<endl;
	if(cnt==0) cout<<0<<endl;
	else if(cnt==2) cout<<1<<endl;
	else cout<<-1<<endl;

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