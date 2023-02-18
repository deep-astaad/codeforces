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
const ll mod = 1e9 + 7;
/*
HINT : Editorial Dekhle


*/
// vll v = {2,3,4,5,7,8,9,11,13,16,17,19,23};
// vll p = {1,2,6,12,60,420,840,2520,27720,360360,720720,12252240,232792560};

// ll i=1;
// ll func(ll n){
// 	for (int i = 1; i <= n+1; ++i)
// 	{
// 		if(n%i){
// 			return i;
// 		}
// 	}
// 	return n+1;
// }
void solve()
{
	// if(i==1000) return;
	ll n; cin >> n;
	ll sundari = 0;
	ll lcm = 1;
	ll i = 2;
	while (lcm <= n) {
		ll min_divides_i = n / lcm;
		lcm = lcm * (i / (__gcd(lcm, i)));
		ll count_of_occurance = n / lcm;
		sundari += i * (min_divides_i - count_of_occurance);
		sundari %= mod;
		i++;
	}
	cout << sundari << nn;
	// ll a=(n+1)/2;
	// ll b=(n/2);
	// sum = ((2%mod)*(a%mod))%mod;

	// for (int i = 2; i < p.size(); ++i)
	// {
	// 	ll x=n/p[i];
	// 	cout<<x<<sp<<p[i]<<nn;
	// 	sum = ((sum%mod) + (((b-x)%mod)*(v[i-1]%mod))%mod)%mod;
	// 	cout<<sum<<"\n";
	// 	b=x;
	// }
	// cout<<sum%mod<<nn;
	// set<ll> st;
	// ll n=i;
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	cout<<v[i]<<nn;
	// }
	// map<ll,ll> mp;
	// for (int i = 1; i <= n; i+=1)
	// {
	// 	for (int j = 0; j < v.size(); ++j)
	// 	{
	// 		if(i%v[j]){
	// if(st.count(v[j])) break;
	// cout<<i<<sp<<v[j]<<nn;
	// st.insert(v[j]);
	// mp[v[j]]++;
	// cout<<v[j]<<nn;
	// 			sum=((sum%mod)+(v[j]%mod))%mod;
	// 			break;
	// 		}
	// 	}
	// }
	// cout<<i++<<nn;
	// for(auto it:mp){
	// 	cout<<it.ff<<" : "<<it.ss<<nn;
	// }

	// nl; nl;
	// cout<<10000/2+10000%2<<nn;
	// cout<<2*(5000/3)+5000%3<<nn;
	// cout<<(3334/4)<<nn;
	// cout<<833/5<<nn;
	// cout<<10000/7+10000%7<<nn;
	// cout<<10000/8+10000%8<<nn;
	// cout<<10000/9+10000%9<<nn;
	// cout<<10000/11+10000%11<<nn;
	// cout<<sum%mod<<nn;
}

int main()
{	ios
	// cout<<10000/667<<nn;
	ll testcase;
	testcase = 1;
	cin >> testcase;
	while (testcase--)
	{
		solve();
	}
	return 0;
}