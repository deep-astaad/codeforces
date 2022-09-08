#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector <long long>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'

ll len(ll n){
	if(n>=1 && n<=9) return 1;
	else if(n>=10 && n<=99) return 2;
	else if(n>=100 && n<=999) return 3;
	else if(n>=1000 && n<=9999) return 4;
	else if(n>=10000 && n<=99999) return 5;
	else if(n>=100000 && n<=999999) return 6;
	else if(n>=1000000 && n<=9999999) return 7;
	else if(n>=10000000 && n<=99999999) return 8;
	else if(n>=100000000 && n<=999999999) return 9;
	else if(n>=1000000000 && n<=9999999999) return 10;
	else if(n>=10000000000 && n<=99999999999) return 11;
	else{return 0;}
}
int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
		ll n;
		cin>>n;
		vll a(n);
		vll b(n);
		// ll t1=0,t2=0;
		priority_queue<ll> pq1;
		priority_queue<ll> pq2;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			pq1.push(a[i]);
			// t1+=len(a[i]);
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
			pq2.push(b[i]);
			// t2+=len(b[i]);
		}
		// cout<<abs(t1-t2)<<nn;
		ll ans=0;
		while(!pq2.empty() && !pq2.empty()){
			if(pq1.top()==pq2.top()){
				pq1.pop();
				pq2.pop();
			}
			else if(pq1.top()>pq2.top()){
				ll x=pq1.top();
				pq1.pop();
				pq1.push(len(x));
				ans++;
			}
			else{
				ll x=pq2.top();
				pq2.pop();
				pq2.push(len(x));
				ans++;
			}
		}
		cout<<ans<<endl;

    }
    return 0;
}