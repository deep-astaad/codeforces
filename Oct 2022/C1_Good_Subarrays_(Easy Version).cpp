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

// ll fun(ll n){
// 	ll ans=0;
// 	ans = (n*(n+1))/2;
// 	return ans;
// }

void solve()
{
		ll n;
		cin>>n;
		vll v(n,0);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		vll pre(n,0);
		for (int i = n-1; i >= 0; --i)
		{
			pre[i]=max(i-v[i]+1,0ll);
		}
		
		ll mx=0;
		ll ans=0;
		for (int i = 0; i < n; ++i)
		{
			ans+=(i-max(mx,pre[i]))+1;
			mx=max(mx,pre[i]);
		}
		cout<<ans<<nn;
		
		// ll ans=0;
		// for (int i = 0; i < n; ++i)
		// {
		// 	ll val=1;
		// 	ll c=0;
		// 	for (int j = i; j < n; ++j)
		// 	{
		// 		if(v[j]>=val){
		// 			c++;
		// 			val++;
		// 		}
		// 		else{
		// 			ans+=c;
		// 			c=0;
		// 			val=1;
		// 			break;
		// 		}
		// 	}
		// 	ans+=c;
		// }
		// cout<<ans<<nn;
		// ll ans=0;
		// ll c=0;
		// ll val=1;
		// for (int i = 0; i < n; ++i)
		// {
		// 	if(v[i]>=val){
		// 		c++;
		// 		val++;
		// 	}
		// 	else{
		// 		ans+=fun(c);
		// 		c=0;
		// 		val=1;
		// 		if(v[i]>=val){
		// 			c++;
		// 			val++;
		// 		}
		// 	}
			
		// }
		// ans+=fun(c);
		// cout<<ans<<nn;
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


// gcd(vec[i], vec[i + 2]) > gcd(vec[i], vec[i + 1])
// __gcd(Arr[i], Arr[i + 2]) > __gcd(Arr[i], Arr[i + 1])