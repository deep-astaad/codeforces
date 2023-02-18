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
#define c(x) cout<<x<<"\n"
#define sp " "
#define nn "\n"
#define nl cout<<nn;
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
//-------------------------------------------------------------------------------//
const ll M = 1e9+7;
/*



*/
void solve()
{
	string s; cin>>s;
	ll n=s.size();
	if(s[0]==s[1]){
		cout<<s[0]<<sp<<s[1]<<sp;
		for (int i = 2; i < n; ++i)
		{
			cout<<s[i];
		}
		nl;
	}
	else if(s[n-1]==s[n-2]){
		for (int i = 0; i < n-2; ++i)
		{
			cout<<s[i];
		}
		cout<<sp<<s[n-2]<<sp<<s[n-1]<<nn;
	}
	else{
		// cyes;
		string a,b,c;
		a+=s[0];
		int i=0;
		b+=s[1];
		for (i = 2; i <n ; ++i)
		{
			if(s[i]!=s[1]){
				break;
			}
			b+=s[i];
		}
		// reverse(c.begin(),c.end());
		for (int j = i; j < n; ++j)
		{
			c+=s[j];
		}
		cout<<a<<sp<<b<<sp<<c<<nn;
	}
	
}

int main()
{
    ll testcase;
    testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
		solve();
    }
    return 0;
}