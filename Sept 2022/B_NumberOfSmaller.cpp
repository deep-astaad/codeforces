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
		vll ans(m,0);
		vll a(n,0);
		vll b(m,0);
		for (ll i = 0; i < n; ++i) cin>>a[i];
		for (ll i = 0; i < m; ++i) cin>>b[i];
		ll count=0;
		int i=0,j=0;
		while(i<n && j<m){
			if(a[i]==b[j]){
				int c1=1,c2=1;
				while(i<n-1 && a[i+1] == a[i]) c1++; i++;
				while(j<m-1 && b[j+1] == b[j]) c2++; j++;
				i++;
				j++;
				count+=c1*c2;
			}
			else if(a[i]<b[j]) {i++;}
			else {j++;}
		}
		cout<<count;
    }
    return 0;
}