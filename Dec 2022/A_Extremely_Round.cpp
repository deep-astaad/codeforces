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
	string s; cin>>s;
	ll f=s[0]-'0';
	cout<<f+(s.size()-1)*9<<nn;
	// ll zr=0;
	// for (int i = 0; i < s.size(); ++i)
	// {
	// 	if (s[i]=='0')
	// 	{
	// 		zr++;
	// 	}
	// }
	// if(1+zr==s.size()){
	// 	cyes;
	// 	return;
	// }
	// cno;
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