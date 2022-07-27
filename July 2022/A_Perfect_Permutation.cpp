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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            v[i]=i+1;
        }
        
        if(n%2 == 0){
            for (ll i = 0; i < n; i+=2)
            {
                int t = v[i];
                v[i] = v[i+1];
                v[i+1] = t;
            }
        }
        else{
            for (ll i = 1; i < n; i+=2)
            {
                int t = v[i];
                v[i] = v[i+1];
                v[i+1] = t;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
