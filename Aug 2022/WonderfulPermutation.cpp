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
        ll n,k;
        cin>>n>>k;
        vector <long long> v(n,0);
        for (int i = 0; i < n; ++i)
        {
        	cin>>v[i];
        }
        ll count = 0;
        for (int i = 0; i < k; ++i)
        {
        	if (v[i] > k)
        	{
        		count++;
        	}
        }
        cout<<count<<endl;
    }
    return 0;
}

