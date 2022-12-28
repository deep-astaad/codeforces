// Coded by : Aman Deep (deep_aman/astaad)
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
#define nl cout<<nn;

const unsigned int M = 1000000007;

void solve()
{
	ll n; cin>>n;
	vll v(n);
	ll sm=0;
	ll cte=0,cto=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		sm+=v[i];
		if(v[i]%2==1 && (v[i]/2)%2==0) cte++;
		if(v[i]%2==0 && (v[i]/2)%2==1) cto++;
	}
	if(sm%2==0){
		cout<<0<<nn;
	}
	else if(sm%2==1){
		if(cte!=0){
			cout<<1<<nn;
		}
		else if(cto!=0){
			cout<<1<<nn;
		}
		else{
			ll mne=LLONG_MAX,mno=LLONG_MAX;
			for (int i = 0; i < n; ++i)
			{
				ll cnt=0;
				if(v[i]%2==0){
					while(v[i]%2==0){
						v[i]/=2;
						cnt++;
					}
					mno=min(mno,cnt);
				}
				else{
					while(v[i]%2==1){
						v[i]/=2;
						cnt++;
					}
					mne=min(mne,cnt);
				}
				
			}
			cout<<min(mne,mno)<<nn;
		}
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