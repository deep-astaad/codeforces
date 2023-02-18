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

vector<string> pre;
void fun(){
	for (int i = 0; i < 64; ++i)
	{
		unsigned long long pw=pow(2,i);
		string s=to_string(pw);
		pre.push_back(s);
	}
}

void solve()
{
	string s; cin>>s;
	ll mn=LLONG_MAX;
	for (int i = 0; i < 64; ++i)
	{
		ll cnt=0;
		ll pt=0;
		ll mtch=0;
		for (int j = 0; j < s.size(); ++j)
		{
			if(s[j]==pre[i][pt]){
				pt++;
				mtch++;
			}
			if(pt==pre[i].size()) break;
		}

		mn=min(mn,s.size()-mtch+pre[i].size()-mtch);
	}
	cout<<mn<<nn;
}

int main()
{
	fun();
    ll testcase;
    testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
		solve();
    }
    return 0;
}