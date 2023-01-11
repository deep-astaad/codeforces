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

void solve()
{
	ll n; cin>>n;
	string s; cin>>s;
	unordered_map<string,ll> mp;
	for (ll i = 0; i < n-1; i++)
	{
		string t="";
		t+=s[i];
		t+=s[i+1];
		if(mp.find(t)==mp.end()){
			mp[t]=i+1;
		}
		else{
			if(mp[t]!=i){
				cyes;
				return;
			}
		}
		// if(mp[t]!=0 && i!=mp[t]){
		// 	cyes;
		// 	return;
		// }
		// // if(0!=mp[t]){}
		// if(mp.find(t) == mp.end()){
		// 	mp[t]=i+1;
		// }
		// // mp[t]=min(mp[t],i+1);
		// else{
		// 	mp[t]=i+1;
		// }
		
	}
	cno;
	// string ans="";
	// ll cnt=0;
	// for (int i = 0; i < s.size();)
	// {
	// 	ll len=0;
	// 	for (int j = 0; j < ans.size(); ++j)
	// 	{
	// 		if(s[i]==ans[j]){
	// 			ll t=1;
	// 			for (int k = j+1; k < ans.size(); ++k)
	// 			{
	// 				if(s[i]==ans[k]){
	// 					t++;
	// 				}
	// 				else{
	// 					break;
	// 				}
	// 			}
	// 		}
	// 	}
	// 	if(i==5){
	// 		cout<<len<<nn;
	// 	}
	// 	cnt++;
	// 	if (len==0)
	// 	{
	// 		i++;
	// 	}
	// 	else{
	// 		i+=len;
	// 	}
	// }
	// cout<<cnt<<nn;
	// if (cnt<n)
	// {
	// 	cyes;
	// }
	// else{
	// 	cno;
	// }
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