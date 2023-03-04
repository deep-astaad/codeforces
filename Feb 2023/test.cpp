/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define vll vector <long long>
#define pb push_back
#define sp ' '
#define endl '\n'
#define nn '\n'
#define nl cout << '\n';
const ll M = 1e7 + 1;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

vll seive(M + 1);
void prime() {

    for (int i = 0; i <= M; ++i)
    {
        seive[i] = i;
    }
    for (int i = 2; i * i <= M; ++i)
    {
        if (seive[i] == i) {
            for (int j = i * i; j <= M; j += i)
            {
                seive[j] = seive[i];
            }
        }
    }
}


void solve()
{
    prime();
    int n; cin >> n;
    vll ans1(n, -1), ans2(n, -1);
    for (int i = 0; i < n; ++i)
    {
        int x; cin >> x;
        set<int> fact;
        for (int j = x; j > 1; j /= seive[j] ) {
            fact.insert(seive[j]);
        }
        if (fact.size() > 1) {
            ans1[i] = *fact.begin();
            fact.erase(*fact.begin());
            ans2[i] = 1;
            for (auto it : fact)
            {
                ans2[i] *= it;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << ans1[i] << sp;
    }
    nl;
    for (int i = 0; i < n; ++i)
    {
        cout << ans2[i] << sp;
    }
    nl;
}

int32_t main()
{
    deep_aman;
    ll testcase = 1;
    while (testcase--) solve();
    return 0;
}