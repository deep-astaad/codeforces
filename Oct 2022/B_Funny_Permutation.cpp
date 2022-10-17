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
		if(n%2==0){
			for (int i = n; i > 0; --i)
			{
				cout<<i<<sp;
			}
		}
		else{
			if(n==3){
				cout<<-1;
			}
			else if(n==5){
				cout<<5<<sp<<4<<sp<<1<<sp<<2<<sp<<3;
			}
			else{
				for (int i = n; i > 3; i-=2)
				{
					cout<<i-1<<sp<<i<<sp;
				}
				cout<<3<<sp<<2<<sp<<1;
			}
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