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
	ll n,sm; cin>>n>>sm;
	vll v(n);
	ll mx=LLONG_MIN;
	vll ck(100);
	ll sum=sm;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		ck[v[i]]=1;
		sum+=v[i];
		mx=max(mx,v[i]);
	}

	// Approach 2: Binary Search
	ll low=1,high=2*sum,val=2*sum;
	while(low<=high){
		ll mid = low + (high-low)/2;
		ll mul=mid*(mid+1);
		if(mul==val){
			cyes; return;
		}
		else if(mul<val){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	cno;
	return ;

	// Approach 1: Extra space (Space not optimized)
	// ll i=1;
	// while(i<mx || sm>0){
	// 	if(ck[i]!=1){
	// 		sm-=i;
	// 	}
	// 	i++;
	// }
	// if (sm==0)
	// {
	// 	cyes; return;
	// }
	// cno;
	// return;

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