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
	ll col; cin>>col;
	string s1,s2; cin>>s1; cin>>s2;
	ll cnt=0;
	for (ll i = 0; i < col; ++i)
	{
		if(s1[i]=='B') cnt++;
		if(s2[i]=='B') cnt++;
	}
	// cout<<cnt<<nn;
	bool flag=false;
// case 1
	ll prev=-1;
	ll i=0,j=1;
	ll ans=0;
	while(ans<cnt && i<col){
		if(j==1){
			if(s1[i]=='B'){
				ans++;
				if(s2[i]=='B' && prev!=2){
					j=2;
					prev=1;
				}
				else{
					i++;
					prev=1;
				}
			}
			else{
				flag=true;
				break;
			}
		}
		else if(j==2){
			if(s2[i]=='B'){
				ans++;
				if(s1[i]=='B' && prev!=1){
					j=1;
					prev=2;
				}
				else{
					i++;
					prev=2;
				}
			}
			else{
				flag=true;
				break;
			}
		}
	}
	if(ans==cnt){
		// cout<<3<<sp;
		cyes; return;
	}
// case 2
	prev=-1;
	i=0,j=2;
	ans=0;
	while(ans<cnt && i<col){
		if(j==1){
			if(s1[i]=='B'){
				ans++;
				if(s2[i]=='B' && prev!=2){
					j=2;
					prev=1;
				}
				else{
					i++;
					prev=1;
				}
			}
			else{
				flag=true;
				break;
			}
		}
		else if(j==2){
			if(s2[i]=='B'){
				ans++;
				if(s1[i]=='B' && prev!=1){
					j=1;
					prev=2;
				}
				else{
					i++;
					prev=2;
				}
			}
			else{
				flag=true;
				break;
			}
		}
	}
	if(ans==cnt){
		// cout<<3<<sp;
		cyes; return;
	}
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
// case 3
	prev=-1;
	i=0,j=1;
	ans=0;
	while(ans<cnt && i<col){
		if(j==1){
			if(s1[i]=='B'){
				ans++;
				if(s2[i]=='B' && prev!=2){
					j=2;
					prev=1;
				}
				else{
					i++;
					prev=1;
				}
			}
			else{
				flag=true;
				break;
			}
		}
		else if(j==2){
			if(s2[i]=='B'){
				ans++;
				if(s1[i]=='B' && prev!=1){
					j=1;
					prev=2;
				}
				else{
					i++;
					prev=2;
				}
			}
			else{
				flag=true;
				break;
			}
		}
	}
	if(ans==cnt){
		// cout<<3<<sp;
		cyes; return;
	}
// case 4
	prev=-1;
	i=0,j=2;
	ans=0;
	while(ans<cnt && i<col){
		if(j==1){
			if(s1[i]=='B'){
				ans++;
				if(s2[i]=='B' && prev!=2){
					j=2;
					prev=1;
				}
				else{
					i++;
					prev=1;
				}
			}
			else{
				flag=true;
				break;
			}
		}
		else if(j==2){
			if(s2[i]=='B'){
				ans++;
				if(s1[i]=='B' && prev!=1){
					j=1;
					prev=2;
				}
				else{
					i++;
					prev=2;
				}
			}
			else{
				flag=true;
				break;
			}
		}
	}
	if(ans==cnt){
		// cout<<3<<sp;
		cyes; return;
	}
	cno;
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