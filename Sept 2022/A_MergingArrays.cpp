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
    // cin >> t;
    t=1;
    while (t--)
    {
		ll n,m;
		cin>>n>>m;
		vll ans(n+m,0);
		vll a(n,0);
		vll b(m,0);
		for (ll i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (ll i = 0; i < m; ++i)
		{
			cin>>b[i];
		}
		ll x=0,y=0,z=0;
		while( x<a.size() && y<b.size()){
			if(a[x]<b[y]){
				ans[z++] = a[x++];
			}
			else{
				ans[z++] = b[y++];
			}
		}
		while(x<a.size()){
			ans[z++]=a[x++];
		}
		while(y<b.size()){
			ans[z++]=b[y++];
		}
		for (int i = 0; i < n+m; ++i)
		{
			cout<<ans[i]<<sp;
		}
		cout<<nn;
    }
    return 0;
}