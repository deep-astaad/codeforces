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
	/* write code here */
	string s;
	cin>>s;
	ll n = s.size();
	string t=s;
	sort(all(s));
	string ans="";
	ans+=t[n-1];
	ll mn=t[n-1];
	for (int i = n-2; i >= 0; --i)
	{
		if(t[i]>mn){
			ans+=(min(t[i]+1,'0'+9));
		}
		if(t[i]<=mn){
			mn = t[i];
			ans+=t[i];
		}
	}
	sort(all(ans));
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