#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> x(n, 0);
        vector<ll> y(n, 0);
        for (ll i = 0; i < n; i++)
        {
            cin >> x[i];
            cin >> y[i];
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        ll ansx = 0, ansy = 0;
        if (x[x.size() - 1] > 0)
        {
            ansx += x[x.size() - 1];
        }
        if (x[0] < 0)
        {
            ansx += abs(x[0]);
        }
        if (y[y.size() - 1] > 0)
        {
            ansy += y[y.size() - 1];
        }
        if (y[0] < 0)
        {
            ansy += abs(y[0]);
        }
        cout << 2 * (ansx + ansy) << endl;
    }
    return 0;
}
