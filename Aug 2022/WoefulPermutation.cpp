#include <bits/stdc++.h>
using namespace std;
#define ll long long
// #define vector <long long> vll
// #define cyes cout<<"YES"<<endl;
// #define cno cout<<"NO"<<endl;
// #define sp " "


int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        
        if (n%2 == 0)
        {
        	for (int i = 0; i < n; ++i)
	        {
	        	if (i%2 == 0)
	        	{
	        		cout<<i+2<<" ";
	        	}
	        	else{
	        		cout<<i<<" ";
	        	}
	        }
	        cout<<endl;
        }
        else{
        	cout<<1<<" ";
        	for (int i = 1; i < n; ++i)
        	{
        		if (i%2 == 1)
	        	{
	        		cout<<i+2<<" ";
	        	}
	        	else{
	        		cout<<i<<" ";
	        	}
        	}
        	cout<<endl;
        }
        
        
    }
    return 0;
}

