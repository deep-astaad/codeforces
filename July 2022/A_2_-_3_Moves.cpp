#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 1)
        {
            cout << 2 << endl;
        }
        if (n == 2)
        {
            cout << 1 << endl;
        }
        if (n == 3)
        {
            cout << 1 << endl;
        }
        if (n >= 4)
        {
            if (n % 3 == 0)
            {
                cout << n / 3 << endl;
            }
            if (n % 3 == 1)
            {
                cout << (n / 3) + 1 << endl;
            }
            if (n % 3 == 2)
            {
                cout << (n / 3) + 1 << endl;
            }
        }
    }
    return 0;
}
