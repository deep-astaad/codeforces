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
const ll mod = 998244353;
/*



*/
void solve()
{
	ll n; cin>>n;
	string s;
	cin>>s;
	set<char> st;
	vll v(n);
	for(int i=0;i<n;i++){
		st.insert(s[i]);
		v[i]=st.size();
	}
	vll t(n);
	st.clear();
	for (int i = n-1; i >= 0; --i)
	{
		st.insert(s[i]);
		t[i]=st.size();
	}
	ll total = v[n-1];
	ll ans=LLONG_MIN;
	for (int i = 0; i < n-1; ++i)
	{
		ans=max(ans,v[i]+t[i+1]);
	}
	cout<<ans<<nn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testcase;
    testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
		solve();
    }
    return 0;
}