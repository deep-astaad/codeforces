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
		ll n; cin>>n;
		vll v(n,0);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}

		vll a(n+1,0);
		for (int i = n-1; i > 0; --i)
		{
			a[i]=(v[i]*v[i-1])/(__gcd(v[i],v[i-1]));
		}
		a[0]=v[0];
		a[n]=v[n-1];
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<a[i]<<sp;
		// }
		// cout<<nn;
		bool flag=false;
		for (int i = 0; i < n; ++i)
		{
			if(__gcd(a[i],a[i+1])>v[i]){
				flag=true;
			}
		}
		if(__gcd(a[0],v[0])!=v[0]){
			flag = true;
		}
		// bool flag=false;
		// for (int i = n-1; i > 1; --i)
		// {
		// 	if(__gcd(v[i-2],v[i])>v[i-1]){
		// 		flag = true;
		// 	}
		// }
		if (flag)
		{
			cno;
		}
		else{
			cyes;
		}
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


