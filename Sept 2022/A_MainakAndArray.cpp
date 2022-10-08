#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector <long long>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'


int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
		ll n;
		cin>>n;
		vll v(n);
		for (ll i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		ll ans1=0;
		ll mx=INT_MIN;
		for (int i = 1; i < n; ++i)
		{
			if(mx<v[i]) {
				mx = v[i];
			}
		}
		ans1=mx-v[0];
		ll ans2=0;
		ll mn = INT_MAX;
		for (int i = 0; i < n-1; ++i)
		{
			if(mn > v[i]){
				mn = v[i];
			}
		}
		ans2 = v[n-1]-mn;
		ll ans3=0;
		ans3 = v[n-1]-v[0];
		for (int i = 0; i < n-1; ++i)
		{
			ans3 = max(ans3,v[i]-v[i+1]);
		}
		// cout<<ans1<<sp<<ans2<<sp<<ans3<<nn;
		cout<<max(ans3,(max(ans1,ans2)));
		cout<<nn;
    }
    return 0;
}