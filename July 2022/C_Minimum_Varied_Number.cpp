#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll s;
        cin >> s;
        vector<ll> v;
        int x = 9;
        while (s != 0)
        {
            if (s >= x)
            {
                v.push_back(x);
                s -= x;
                x--;
            }
            if (s < x)
            {
                x--;
            }
        }
        for (int i = v.size() - 1; i >= 0; --i)
        {
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}
