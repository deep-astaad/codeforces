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
		ll n;
		cin>>n;
		vll v(n);
		ll sum=0;
		ll mx=LLONG_MIN;
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
			sum+=v[i];
			if(mx<v[i]){
				mx=v[i];
			}
		}
		vll pre(n,0);
		pre[0]=v[0];
		for (int i = 1; i < n; ++i)
		{
			pre[i]=v[i]+pre[i-1];
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<pre[i]<<sp;
		// }
		// cout<<nn;
		// vll sol(sum+1,0);
		
		ll ans=n;
		for (int i = 1; i <= n; ++i)
		{
			if(sum%i==0){
				ll seg=0;
				ll val = sum/i;
				ll len=0;
				ll mxlen=0;
				ll prev=0;
				for (int j = 0; j < n; ++j)
				{
					if(pre[j]-prev==val){
						len++;
						mxlen=max(len,mxlen);
						len=0;
						seg++;
						prev=pre[j];
					}
					else{
						len++;
					}
				}
				if(seg == i){
					ans=min(ans,mxlen);
				}
			}
		}

		cout<<ans<<nn;
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



// ll ans=n;
// 		for (int i = 1; i <= n; ++i)
// 		{
// 			ll x=0;
// 			ll j=0;
// 			ll t=0;
// 			ll p=0;
// 			ll val=0;
// 			bool flag = true;
// 			for (;j < n; ++j)
// 			{
// 				if(j==n-1 && pre[j]-x!=i){
// 					flag=false;
// 					break;
// 				}
// 				if(pre[j]-x==i){
// 					t++;
// 					x=pre[j];
// 					p=max(p,t);
// 					t=0;
// 				}
// 				else if(pre[j]-x>i){
// 					flag=false;
// 					break;
// 				}
// 				else{
// 					// flag=false;
// 					t++;
// 				}
// 			}

// 			if(j==n && flag){
// 				// cout<<"Value changed on "<<i<<sp<<p<<nn;
// 				ans=min(ans,p);
// 				flag=true;
// 			}
// 		}