#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        std::vector<ll> v(n);
        for (int i = 0; i < n; ++i)
        {
        	cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<v[n-1]-v[0]+v[n-2]-v[1]<<endl;
    }
    return 0;
}

