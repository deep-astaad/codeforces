#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int flag = 0;
        int temp = b[0];
        for (int i = n - 1, j = m - 1; j > 0; i--, j--)
        {
            if (a[i] != b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            int flag1 = 0;
            for (int i = 0; i <= n - m; i++)
            {
                if (a[i] == temp)
                {
                    flag1 = 1;
                    cout << "YES" << endl;
                    break;
                }
            }
            if (flag1 == 0)
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
