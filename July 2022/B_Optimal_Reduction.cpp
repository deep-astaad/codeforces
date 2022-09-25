#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
// #define

int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n, 0);
        ll maximum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[maximum] < v[i])
            {
                maximum = i;
            }
        }
        if (n == 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            int flag = 0;
            for (ll i = 0; i < maximum; i++)
            {
                if (v[i] > v[i + 1])
                {
                    flag = 1;
                }
            }
            for (ll i = maximum; i < n - 1; i++)
            {
                if (v[i] < v[i + 1])
                {
                    flag = 1;
                }
            }
            if (flag == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
