#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
        }
        else if (a < b)
        {
            long long temp = b - a;
            cout << temp << " " << min(a % temp, temp - (a % temp)) << endl;
        }
        else
        {
            long long temp = a - b;
            cout << temp << " " << min(a % temp, temp - (a % temp)) << endl;
        }
    }
    return 0;
}
