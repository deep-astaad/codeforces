// Author : deep_aman (astaad)
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
#define cyes(); cout<<"YES"<<"\n";
#define cno(); cout<<"NO"<<"\n";
#define sp " "
#define nn "\n"

const unsigned int M = 1000000007;

void solve(){
/* Input */
	ll n;
	cin>>n;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	// cout<<v[0]<<nn;
/* Input */

/* Code */
	std::vector<ll> ans;
	ans.push_back(v[0]);
		for (int i = 1; i < n; ++i)
		{
			// cout<<ans[ans.size()-1]<<nn;
			ll a = v[i]+ans[i-1];
			ll b = ans[i-1]-v[i];
			if ((a>=0 && b>=0) && (a!=b))
			{
				cout<<-1<<nn;
				return;
			}
			else{
				ans.push_back(a);
			}
		}
		for (int i = 0; i < ans.size(); ++i)
		{
			cout<<ans[i]<<sp;
		}
		cout<<nn;
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