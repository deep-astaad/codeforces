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
	string s; cin>>s;
	vll ls(n-1);
	char last=s[0];
	ls[0]=1;
	for (int i = 1; i < n-1; ++i)
	{
		if(s[i]!=last){
			break;
		} 
		else ls[i]=1;
	}
	vll test(n-1);
	ll zr=0,on=0;
	for (int i = 0; i < n-1; ++i)
	{
		if(s[i]-'0'==0) zr++;
		else on++;
		if(on>0 && zr>0) test[i]=2;
		else if(on>0) test[i]=1;
		else test[i]=0;
	}

	for (int i = 2; i <= n; ++i)
	{
		if(test[i-2]==1 || test[i-2]==0) cout<<1<<sp;
		// else if(test[i-3]==1 || test[i-3]==0) cout<<i-2<<sp;
		else cout<<i-1<<sp;
	}
	nl;

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