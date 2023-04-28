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

*/

#define TESTCASE
void solve()
{
	int n, k; cin>>n>>k;
	vll v(k), c(k);

	for (int i = 0; i < k; ++i)
		cin>>v[i];

	for (int i = 0; i < k; ++i)
		cin>>c[i];

	for (int i = 0; i < k; ++i) {
		if((i>=1 && v[i]-v[i-1]<c[i]-c[i-1]) || (c[i]>v[i])){
			cno;
			return;
		}
	}

	cyes;
	string s = "abc";
	char cur = 'd';
	int palin = 3;
	int prev = 0;
	for (int i = 0; i < k; ++i) {
		int need = c[i] - palin;
		palin=c[i];
		bool flag = false;
		while(need--) {
			flag = true;
			s += cur;
		}
		if(flag) cur++;
		while(s.size() < v[i]){
			prev %= 3;
			if(prev == 0) s += "a", prev++;
			else if(prev == 1) s += "b", prev++;
			else s+="c", prev++;
		}
	}
	cout<<s<<endl;
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