// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define cyes cout<<"YES"<<"\n"
#define cno cout<<"NO"<<"\n"
#define sp " "
#define nn "\n"
#define nl cout<<nn;
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
//-------------------------------------------------------------------------------//
const ll M = 1e9 + 7;
/*



*/
void solve()
{
	ll n; cin >> n;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	map<ll, ll> mp;
	for (int i = 0; i < n; ++i)
	{
		map<ll, ll> temp;
		if (v[i] >= 0) {
			temp[1] = max(temp[1], v[i]);
		}

		for (auto it : mp) {
			if (temp.find(it.ff) == temp.end()) {
				temp[it.ff] = it.ss;
			}
			else if (temp.find(it.ff) != temp.end() && temp[it.ff] < it.ss) {
				temp[it.ff] = it.ss;
			}
			if (it.ss + v[i] >= 0) {
				if (temp.find(it.ff + 1) == temp.end()) {
					temp[it.ff + 1] = it.ss + v[i];
				}
				else if (temp[it.ff + 1] < it.ss + v[i]) {
					temp[it.ff + 1] = it.ss + v[i];
				}
			}
		}
		mp = temp;
		// for(auto it:mp){
		// 	cout<<it.ff<<sp<<it.ss<<nn;
		// }
		// nl;
	}
	if (mp.size() == 0) {
		cout << 0 << nn;
		return;
	}
	cout << mp.rbegin()->ff << nn;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll testcase;
	testcase = 1;
	// cin >> testcase;
	while (testcase--)
	{
		solve();
	}
	return 0;
}