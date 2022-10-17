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
#define cyes cout<<"YES"<<"\n"
#define cno cout<<"NO"<<"\n"
#define sp " "
#define nn "\n"


const unsigned int M = 1000000007;

void solve()
{
		ll n; cin>>n;
		string s; cin>>s;
		vll v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		ll l=-1;
		if (s[0]=='0')
		{
			l=0;
		}
		for (int i = 1; i < n; ++i)
		{
			if(s[i]=='1' && s[i-1]=='0'){
				if(v[i-1]>=v[i]){
					s[i]='0';
					s[i-1]='1';
					// continue;
				}
				// if(s[i]=='0' && s[i+1]=='1'){
				// 	l=i;
				// }
			}

			if(l>=0 && s[i]=='1' && s[l]=='0' && v[l]>v[i]){ //l>=0 && v[l]>=v[i] && v[l]=='0'
				s[i]='0';
				s[l]='1';
				l=-1;
			}

			if(s[i]=='0' && s[i+1]=='1'){
				l=i;
			}

			if(s[i]=='0' && s[i+1]=='0'){
				l=-1;
			}
		}
		ll ans=0;
		for (int i = 0; i < n; ++i)
		{
			if (s[i]=='1')
			{
				ans+=v[i];
			}
			// else if(v[l]>v[i]){
			// 	s[i]='0';
			// 	s[i-1]='1';
			// }
		}
		cout<<ans<<nn;
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