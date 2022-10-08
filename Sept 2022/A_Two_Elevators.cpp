#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <long long>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'


int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
		ll a,b,c; cin>>a>>b>>c;
		ll t1 = abs(a-1);
		ll t2 = abs(b-c)+abs(c-1);
		if (t1<t2)
		{
			cout<<1<<nn;
		}
		else if (t1>t2)
		{
			cout<<2<<nn;
		}
		else{
			cout<<3<<nn;
		}
    }
    return 0;
}