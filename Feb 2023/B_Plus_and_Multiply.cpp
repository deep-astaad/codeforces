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
	ll a, b, n; cin >> n >> a >> b;
	ll val = 1;
	while (val <= n) {
		if ((n - val) % b == 0) {
			cyes;
			return;
		}
		if (a == 1) break;
		val *= a;
	}
	cno;
	// while(n){
	// 	if(n%b==1){
	// 		cyes;
	// 		return;
	// 	}
	// 	if(n%a==0){
	// 		n/=a;
	// 	}
	// 	else{
	// 		n-=b;
	// 	}
	// }
	// cno;
	// if(n%b==1 || n%b==a) cyes;
	// else cno;
	// set<ll> st;
	// vll v;
	// v.push_back(1);
	// for (int i = 0; i < v.size() && i<20000; ++i)
	// {
	// 	ll x = v[i]+b;
	// 	ll y = v[i]*a;
	// 	if(st.count(x)==0) {v.push_back(x); st.insert(x);}
	// 	if(st.count(y)==0) {v.push_back(y); st.insert(y);}
	// }
	// for(auto it:st){
	// 	cout<<it<<sp;
	// }
	// nl;
	// nl;
	// cout<<n%a<<sp<<n%b<<sp<<n/a<<sp<<n/b<<sp<<n%(a+b)<<sp<<n%(a*b)<<nn;
	// if(n%a==0 || n%a==b) cyes;
	// else cno;
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