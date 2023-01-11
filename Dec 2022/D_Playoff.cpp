// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define deb(x); cout << #x << " = " << x << endl;
#define cyes cout<<"YES"<<"\n"
#define cno cout<<"NO"<<"\n"
#define sp " "
#define nn "\n"
#define nl cout<<nn;

const unsigned int M = 1000000007;

ll power(ll a, ll n){
	ll ans=1;
	while(n--){
		ans*=a;
	}
	return ans;
}

void solve()
{
	ll n; cin>>n;
	string s; cin>>s;
	ll zr=0,on=0;
	ll teams = power(2,n);
	for (int i = 0; i < n; ++i)
	{
		if(s[i]=='0'){
			zr++;
		}
		else{
			on++;
		}
	}
	ll fst=1,lst=teams;
	if(on!=0){
		fst=(power(2,on)-1)+1;
	}
	if(zr!=0){
		lst = teams - (power(2,zr)-1);
	}

	for (int i = fst; i <= lst; ++i)
	{
		cout<<i<<sp;
	}
}

int main()
{
    ll testcase;
    testcase = 1;
    // cin >> testcase;
    while (testcase--)
    {
		solve();
    }
    return 0;
}