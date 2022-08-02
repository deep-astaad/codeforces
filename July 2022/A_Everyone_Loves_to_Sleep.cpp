#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        long long n, h, m;
        cin >> n >> h >> m;
        h = (h * 60) * 60;
        m = m * 60;
        ll t = h + m;
        // cout<<t<<endl;
        std::vector<pair<long long, long long>> v(n);
        std::vector<ll> vec(n);
        for (int i = 0; i < n; ++i)
        {
            ll x, y;
            cin >> x >> y;
            // cin>>
            v[i].first = x * 60 * 60;
            v[i].second = y * 60;
            vec[i] = v[i].first + v[i].second;
            // cout<<vec[i];
            // cout<<v[i].first<<v[i].second<<endl;
        }
        ll time = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            if (vec[i] < t)
            {
                time = min(time, 24 * 60 * 60 - (t - vec[i]));
            }
            if (vec[i] >= t)
            {
                time = min(time, (vec[i] - t));
            }
        }
        // cout<<time<<endl;
        ll ansh = (time / 60) / 60;
        ll ansm = (time / 60) % 60;

        cout << ansh << " " << ansm << endl;
    }
    return 0;
}
