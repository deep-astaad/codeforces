#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector <long long>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'

bool compare(const pair<ll, ll>&i, const pair<ll, ll>&j) 
{ 
	long double f = i.second/i.first;
	long double s = j.second/j.first;
	if (f > s)
	{
		return true;
	}
	else if(s == f){
		return i.second >= j.second;
	}
    return false; 
} 

int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
		ll n; cin>>n;
		vll x(n),y(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>x[i];
		} 
		for (int i = 0; i < n; ++i)
		{
			cin>>y[i];
		}
		vll v(n);
		for (int i = 0; i < n; ++i)
		{
			v[i]=y[i]-x[i];
		}
		sort(v.begin(),v.end());
		ll l=0,h=n-1;
		ll ans=0;
		while(l<h){
			if(v[l]+v[h]>=0){
				ans++;
				l++;
				h--;
			}
			else{
				l++;
			}
		}
		cout<<ans<<endl;
    }
    return 0;
}