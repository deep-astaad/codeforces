#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
		ll n;
		cin>>n;
		for (int i = n-3; i > 1; --i)
		{
			cout<<i<<sp;
		}
		cout<<n-2<<sp<<1<<sp<<n-1<<sp<<n<<endl;
    }
    return 0;
}