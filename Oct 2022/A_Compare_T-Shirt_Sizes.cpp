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
		ll ans=0;
		string a,b;
		cin>>a>>b;
		ll n = a.size();
		ll m = b.size();
		if(a[a.size()-1]!=b[b.size()-1]){
			if(a[a.size()-1]=='S'){
					ans=1;
			}
			else if(a[a.size()-1]=='L'){
				ans=-1;
			}
			else{
				if(b[m-1]=='L'){
					ans=1;
				}
				else{
					ans=-1;
				}
			}
		}
		else{
			if(a[n-1]=='S'){
				if(n<m){
					ans=-1;
				}
				else if(n==m){
					ans=0;
				}
				else{
					ans=1;
				}
			}
			else if(a[n-1]=='M'){
				ans=0;
			}
			else{
				if(n>m){
					ans=-1;
				}
				else if(n==m){
					ans=0;
				}
				else{
					ans=1;
				}
			}
		}
		if(ans==0){
			cout<<"="<<nn;
		}
		else if(ans==1){
			cout<<"<"<<nn;
		}
		else{
			cout<<">"<<nn;
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