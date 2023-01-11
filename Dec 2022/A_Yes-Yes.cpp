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
	string s; cin>>s;
	string test = "Yes";
	ll i=0,j=0;
	if(s[0]=='Y') j=0;
	else if(s[0]=='e') j=1;
	else if(s[0]=='s') j=2;
	else{ cno; return; }

	while(i!=s.size()){
			if(j==3) j=0;
			if(s[i]!=test[j]){
				cno;
				return;
			}
			i++;
			j++;
		}
	cyes;
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