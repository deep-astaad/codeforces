// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
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
/*-------------------------------------------------------------------------------*/
const ll M = 1e9 + 7;
/*
Median of all Indices will be in the middle of optimal solution
now we know the middle index and length of solution
calculate the starting index of the optimal solution
and calculate the total sum of moves and increment the starting index
*/
void solve()
{
	ll n; cin >> n;
	vll v;
	ll cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		char x;
		cin >> x;
		if (x == '*') {
			cnt++;
			v.push_back(i + 1);
		}
	}
	if (cnt == 0 || cnt == 1) {
		cout << 0 << nn;
		return;
	}
	ll mid_idx = cnt / 2 + cnt % 2;
	ll median = v[mid_idx - 1];
	ll start_idx = -1;
	if (cnt % 2) {
		start_idx = median - cnt / 2;
	}
	else start_idx = median - (cnt / 2 - 1);
	ll cur_idx = start_idx;
	ll ans = 0;
	for (int i = 0; i < v.size(); ++i)
	{
		ans += abs(v[i] - cur_idx);
		cur_idx++;
	}
	cout << ans << nn;
}
int main()
{	ios

	ll testcase;
	testcase = 1;
	cin >> testcase;
	while (testcase--)
	{
		solve();
	}
	return 0;
}