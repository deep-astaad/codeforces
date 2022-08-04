#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << n << endl;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            v[i] = i + 1;
            cout << v[i] << " ";
        }
        cout << endl;
        // long long j =0;
        for (long long i = 1; i < n; i++)
        {
            swap(v[i], v[i - 1]);
            for (long long k = 0; k < n; k++)
            {
                cout << v[k] << " ";
            }
            cout << endl;
            // j++;
        }
    }
    return 0;
}
