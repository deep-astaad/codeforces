// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define cyes cout<<"YES"<<"\n"
#define cno cout<<"NO"<<"\n"
#define c(x) cout<<x<<"\n"
#define sp " "
#define nn "\n"
#define nl cout<<nn;
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
//-------------------------------------------------------------------------------//
const ll M = 1e9+7;
/*



*/
void solve()
{
	
	ll n; cin>>n;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	bool odd=false;
	int idx1;
	for (int i = 0; i < n; ++i)
	{
		if(v[i]%2==1){
			odd=true;
			idx1=i;
		}
	}
	if(odd==false){
		cno;
		return;
	}
	int odd1=-1,odd2=-1;
	for (int i = 0; i < n; ++i)
	{
		if(i!=idx1 && v[i]%2==1 && odd1==-1){
			odd1=i;
		}
		else if(i!=idx1 && v[i]%2==1 && odd1!=-1){
			odd2=i;
			cyes;
			cout<<idx1+1<<sp<<odd1+1<<sp<<odd2+1<<nn;
			return;
		}
	}
	int even1=-1,even2=-1;
	for (int i = 0; i < n; ++i)
	{
		if(i!=idx1 && v[i]%2==0 && even1==-1){
			even1=i;
		}
		else if(i!=idx1 && v[i]%2==0 && even1!=-1){
			even2=i;
			cyes;
			cout<<idx1+1<<sp<<even1+1<<sp<<even2+1<<nn;
			return;
		}
	}
	cno;
	return;
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