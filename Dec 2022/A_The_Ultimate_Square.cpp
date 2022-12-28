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
	ll n; cin>>n;
	ll sum=0;
	if(n%2==0){
		sum=(n/2)*((n/2)+1);
	}
	else{
		sum=(n/2)*((n/2)+1);
		sum+=(n/2)+1;
	}
	// for (int i = 1; i <= n; ++i)
	// {
	// 	sum+=i/2;
	// 	if(i%2) sum++;
	// }
	cout<<int(sqrt(sum))<<nn;
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

// 1,1,2,2,3,3,4,4