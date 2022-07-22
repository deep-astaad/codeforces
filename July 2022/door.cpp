#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k1;
        cin >> k1;
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        int count = 1;
        while (k1 != 0)
        {
            k1 = v[k1-1];
            if (v[k1-1] != 0)
            {
                count++;
            }
        }
        if (count == 3)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
