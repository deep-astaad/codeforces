/* Aman Deep (deep_aman) */
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
#define nn '\n'
#define sp ' '
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl '\n'
const int mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*
A
*/

#define TESTCASE
void solve()
{
	int n; cin>>n;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}

	sort(all(v));

	if(v[0]>=0) cout<<v[n-1]<<nn;
	// else if(v[n-1]>abs(v[0])) cout<<v[n-1]<<nn;
	else cout<<v[0]<<nn;

	// return;

	// for (int i = 0; i < n; ++i)
	// {
	// 	bool flag=false;
	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		if(i!=j){
	// 			int a = v[j] + v[i], b = v[j] - v[i];

	// 			// for(auto it : mp[a])
	// 			// {
	// 			// 	if(it!=i && it!=j){ 
	// 			// 		flag=true;
	// 			// 		break;
	// 			// 	}
	// 			// }

	// 			// for(auto it : mp[b])
	// 			// {
	// 			// 	if(it!=i && it!=j){ 
	// 			// 		flag=true;
	// 			// 		break;
	// 			// 	}
	// 			// }
	// 			// if(mp[a]>2 || mp[b]>2){ 
	// 			// 	flag=true;
	// 			// 	continue;
	// 			// }
	// 			int idx1 = --upper_bound(all(v), a)-v.begin(), idx2 = --upper_bound(all(v), b)-v.begin();
	// 			int idx3 = lower_bound(all(v), a)-v.begin(), idx4 = lower_bound(all(v), b)-v.begin();
	// 			if((idx1>=0 && idx1!=i && idx1!=j && v[idx1]==a) || (idx2 >= 0 &&idx2!=i && idx2!=j && v[idx2]==b)){
	// 				flag=true;
	// 				break;
	// 			}
	// 			if((idx3<n && idx3!=i && idx3!=j && v[idx3]==a) || (idx4 < n && idx4!=i && idx4!=j && v[idx4]==b)){
	// 				flag=true;
	// 				break;
	// 			}
	// 		}
	// 	}
	// 	if(!flag){
	// 		cout<<v[i]<<nn;
	// 		return;
	// 	}
	// 	else{
	// 		continue;
	// 	}
	// }
	// // int ans=0;
	// for (int i = 0; i < n; ++i)
	// {
	// 	if(v[i]!=0){
	// 		// ans=min(ans,v[i]);
	// 		cout<<v[i]<<nn;
	// 		return;
	// 	}
	// }
	// if(v[0]==0 && v[n-1]==0) cout<<0<<nn;
	// // cout<<ans<<nn;
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