// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
// #define all(s) s.begin(),s.end()
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
	string s;
	cin>>s;
	ll cp=0,sm=0;
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i]>=65 && s[i]<=90)
		{
			cp++;
		}
		else{
			sm++;
		}
	}
	if(cp>sm){
		for (int i = 0; i < s.size(); ++i)
		{
			s[i]=toupper(s[i]);
		}
	}
	else{
		for (int i = 0; i < s.size(); ++i)
		{
			s[i]=tolower(s[i]);
		}
	}
	cout<<s<<nn;
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