// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <ll>
#define cyes cout<<"YES"<<"\n"
#define cno cout<<"NO"<<"\n"
#define sp " "
#define nn "\n"
#define nl cout<<nn;

const unsigned int M = 1000000007;

void solve()
{
	ll l,r,x,a,b;
	cin>>l>>r>>x;
	cin>>a>>b;

	if (a==b)
	{
		cout<<0<<nn;
	}
	else if(abs(a-b)>=x){
		cout<<1<<nn;
	}
	else if((abs(l-a)<x && abs(r-a)<x) || (abs(b-l)<x && abs(b-r)<x)){
		cout<<-1<<nn;
	}
	else if((abs(l-a)>=x && abs(l-b)>=x) || abs(r-a)>=x && abs(r-b)>=x){
		cout<<2<<nn;
	}
	else{
		cout<<3<<nn;
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

