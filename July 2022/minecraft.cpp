#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<long long> forward(n);
    vector<long long> backward(n);
    forward[0] = 0;
    backward[n - 1] = 0;
    for (long long i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            forward[i] = v[i - 1] - v[i] + forward[i - 1];
        }
        else
        {
            forward[i] = forward[i - 1];
        }
    }
    for (long long i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            backward[i] = v[i + 1] - v[i] + backward[i + 1];
        }
        else
        {
            backward[i] = backward[i + 1];
        }
    }

    while (m--)
    {
        long long s, t;
        cin >> s >> t;
        if (s < t)
        {
            cout << forward[t - 1] - forward[s - 1] << endl;
        }
        else
        {
            cout << backward[t - 1] - backward[s - 1] << endl;
        }
    }

    return 0;
}
