#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> vec(n);
        long long ans = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        long long min = vec[0], max = vec[0];
        for (long long i = 1; i < n; i++)
        {
            if (vec[i] > max)
            {
                max = vec[i];
            }
            if (vec[i] < min)
            {
                min = vec[i];
            }

            if ((abs(max - min) > 2 * x))
            {
                ans++;
                min = vec[i];
                max = vec[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}
