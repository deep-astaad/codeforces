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
		vll a(n,0);
		vll b(n,0);
		ll a1=0,b1=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if(a[i]==1){
				a1++;
			}
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
			if (b[i]==1)
			{
				b1++;
			}
		}
		ll c=0;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]!=b[i]){
				c++;
			}
		}
		if(a1==b1 && c==0){
			cout<<0<<nn;
		}
		else if(a1==b1 && c!=0){
			cout<<1<<nn;
		}
		else {
			cout<<min(abs(a1-b1)+1,c)<<nn;
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