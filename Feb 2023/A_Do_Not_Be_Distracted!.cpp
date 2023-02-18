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
//-------------------------------------------------------------------------------//
const ll M = 1e9 + 7;
/*



*/
void solve()
{
	ll n; cin >> n;
	string s; cin >> s;
	unordered_set<char> st;
	st.insert(s[0]);
	for (int i = 1; i < n; ++i)
	{
		if (s[i] != s[i - 1] && st.count(s[i])) {
			cno; return;
		}
		st.insert(s[i]);
	}
	cyes;

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