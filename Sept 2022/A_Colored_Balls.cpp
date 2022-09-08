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
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		// sort(v.begin(),v.end());
		ll max=0;
		for (int i = 1; i < n; ++i)
		{
			if(v[max]<v[i]){
				max=i;
			}
		}
		cout<<max+1<<nn;
    }
    return 0;
}