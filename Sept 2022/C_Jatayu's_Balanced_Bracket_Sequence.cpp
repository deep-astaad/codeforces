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
		string str;
		cin>>str;
		ll ans=1;
		for (int i = 0; i < 2*n-2; ++i)
		{
			if (str[i]=='(' && str[i]==str[i+1])
			{
				ans++;
			}
		}
		cout<<ans<<nn;
    }
    return 0;
}