#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,k,r,c;
        cin>>n>>k>>r>>c;
        ll test = (r+c-2)%k;
        for (int i = 0; i < n; ++i)
        {
        	for (int j = 0; j < n; j++)
        	{
        		if (test == (i+j)%k)
        		{
        			cout<<'X';
        		}
        		else{
        			cout<<'.';
        		}
        	}
        	cout<<endl;
        }
    }
    return 0;
}

