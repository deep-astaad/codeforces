#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector <long long>
#define cyes cout<<"YES"<<endl;
#define cno cout<<"NO"<<endl;
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
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		vll ans(n,0);
		ll k=0;
		for (int i = n-1; i >= 0; --i)
		{
			k = max(v[i],k);
			if(k>0){
				ans[i]=1;
				k--;
			}
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	if(v[i]==0) continue;
		// 	else{
		// 		int j;
		// 		if(i-v[i]+1 < 0) j = 0;
		// 		else { j = i-v[i]+1; }
		// 		for (; j <= i; ++j)
		// 		{
		// 			ans[j]=1;
		// 		}
		// 	}
		// }
		for (int i = 0; i < n; ++i)
		{
			cout<<ans[i]<<" ";
		}
		cout<<nn;
    }
    return 0;
}