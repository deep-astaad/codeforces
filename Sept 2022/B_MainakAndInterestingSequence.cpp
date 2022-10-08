#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector <long long>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"
#define sp " "
#define nn '\n'


int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
		ll n,m;
		cin>>n>>m;
		if (n>m || (n%2==0 && m%2==1))
		{
			cno;
		}
		else if(n%2 == 1){
			cyes;
			for (int i = 0; i < n-1; ++i)
			{
				cout<<1<<sp;
			}
			cout<<m-n+1<<sp;
		}
		else{
			cyes;
			for (int i = 0; i < n-2; ++i)
			{
				cout<<1<<" ";
			}
			cout<<(m-(n-2))/2<<sp;
			cout<<(m-(n-2))/2<<sp;
		}
		cout<<endl;
	}
    return 0;
}