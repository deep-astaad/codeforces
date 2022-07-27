#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<pair<ll, ll>> v(m);
        for (ll i = 0; i < m; i++)
        {
            int f, s;
            cin >> f >> s;

            v[i].first = f;
            v[i].second = s;
        }
    }
    return 0;
}
