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
	priority_queue<ll> pq;
	ll health = 0, cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		if (v[i] >= 0) {
			cnt++;
			health += v[i];
		}
		else {
			if (health >= (-1 * v[i])) {
				health += v[i];
				cnt++;
				pq.push(-1 * v[i]);
			}
			else if (pq.size() > 0 && pq.top() > (-1 * v[i])) {
				health += pq.top() - (-1 * v[i]);
				pq.pop();
				pq.push(-1 * v[i]);
			}
		}
	}
	cout << cnt << nn;

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