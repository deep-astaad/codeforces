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
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	ll i=0,j=n-1,cnt=0;
	while(i<j){

		if(v[i]==0){
			i++;
			continue;
		}

		if(v[j]==1){
			j--;
			continue;
		}

		if(v[i]==1 && v[j]==0){
			cnt++;
			i++;
			j--;
		}
	}

	cout<<cnt<<nn;
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