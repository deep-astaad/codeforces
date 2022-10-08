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

ll check(ll t){
	ll x=int(sqrt(t));
	cout<<x<<nn;
    ll inc = x;
	x=x*x;
	cout<<x<<nn;
	ll ans = 3*inc - 2;
	while(x<=t){
        	if(x+inc<=t){
        		ans++;
        	}
        	if(x+inc+inc<=t){
        		ans++;
        	}
        	if( x+inc+inc+1<=t){
        		ans++;
        	}
        	x+=inc+inc+1;
        	inc++;
    }
    return ans;
}


void solve(){
        ll l,r; cin>>l>>r;
        ll c=0;
        // ll x=int(sqrt(l));
        // ll inc = x;
        // x=x*x;
        // cout<<check(r)<<sp<<check(l)<<nn;
        c=check(r)-check(l);

        ll x=int(sqrt(l));
	    ll inc = x;
		
        if(x*x==l){
        	c++;
        }
        else{
        	x=x*x;
			while(x<=l){
		        	if(x+inc==l){
		        		c++;
		        	}
		        	if(x+inc+inc==l){
		        		c++;
		        	}
		        	if( x+inc+inc+1==l){
		        		c++;
		        	}
		        	x+=inc+inc+1;
		        	inc++;
		    }
        }
        cout<<c<<nn;
}

int main()
{
    
    ll testcase;
    testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        solve();
        // unsigned long long x = 328393618;
        // x = x*x;
        // cout<<x<<nn;
    }
    return 0;
}