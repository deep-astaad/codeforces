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
	vll x(3),y(3);
	for (int i = 0; i < 3; ++i)
	{
		cin>>x[i]>>y[i];
	}
	// for (int i = 0; i < 3; ++i)
	// {
	// 	cout<<x[i]<<sp<<y[i]<<nn;
	// }
	// xase1
	// if(x[0]!=x[1] && y[0]==y[1] && x[1]==x[2] && y[0]!=y[2]) cno;
	// else if(x[1]!=x[2] && y[1]==y[2] && x[1]==x[0] && y[1]!=y[0]) cno;
	// else if(x[2]!=x[0] && y[2]==y[0] && x[2]==x[1] && y[2]!=y[1]) cno;
	// else cyes;

	if((x[0]==x[2] && y[0]==y[1])||(x[0]==x[1] && y[0]==y[2])) cno;
	else if((x[1]==x[2] && y[1]==y[0])||(x[1]==x[0] && y[1]==y[2])) cno;
	else if((x[2]==x[1] && y[2]==y[0])||(x[2]==x[0] && y[2]==y[1])) cno;
	else cyes;
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