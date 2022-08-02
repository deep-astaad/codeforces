#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        std::vector<ll> v(n);
        std::vector<ll> vec(n, 0);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            vec[v[i] - 1]++;
        }
        ll ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (vec[v[i] - 1] > 1)
            {
                ans = i + 1;
                vec[v[i] - 1]--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
