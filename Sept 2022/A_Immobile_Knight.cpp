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
	ll n,m; cin>>n>>m;

/* Input */
	if(n==1 || m==1){
		cout<<1<<sp<<1<<nn;
	}
	else if (n>3 || m>3)
	{
		cout<<1<<sp<<1<<nn;
	}
	else
	{
		cout<<2<<sp<<2<<nn;
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