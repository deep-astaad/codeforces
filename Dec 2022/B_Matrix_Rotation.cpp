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
	ll x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	bool flag=false;
	if(x1<y1 && x2<y2 && x1<x2 && y1<y2) flag=true;
	else if(x2<x1 && y2<y1 && x2<y2 && x1<y1) flag=true;
	else if(y2<x2 && y1<x1&& y2<y1&&x2<x1) flag=true;
	else if(y1<y2 && x1<x2 && y1<x1 && y2<x2) flag = true;

	if(flag) cyes;
	else cno;
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