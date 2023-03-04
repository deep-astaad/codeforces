/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define vll vector <ll>
#define pll pair <ll, ll>
#define vvll vector <vector <ll>>
#define vpll vector <pair <ll, ll>>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define sp " "
#define endl "\n"
#define nn "\n"
#define cyes cout << "YES" << nn;
#define cno cout << "NO" << nn;
#define nl cout << nn;
const ll mod = 1e9 + 7;
// The greatest success comes from the freedom to fail
//                                                    ~ Mark Zuckerberg


/*


*/

int func(int mx, int x, int lcm) {
    int ans = 0;
    ans = (x / lcm) * (mx);
    if (x % lcm <= mx - 1) {
        ans += (x % lcm);
    }
    else {
        ans += (mx - 1);
    }
    return ans;
}
void solve()
{
    int a, b, q;
    cin >> a >> b >> q;
    int lcm = (a * b) / __gcd(a, b);
    if (b > a) {
        swap(a, b);
    }
    while (q--) {
        int l, r; cin >> l >> r;
        int ans_r = func(a, r, lcm), ans_l = func(a, l - 1, lcm);
        int ans = r - l + 1 - ans_r + ans_l;
        cout << ans << sp;
    }
    nl;
    // for (int i = 1; i <= 200; ++i)
    // {
    //     if ((i % a) % b == (i % b) % a) {
    //         cout << i << sp;
    //     }
    // }

}

int32_t main()
{
    deep_aman;
    ll testcase = 1;
    cin >> testcase;
    while (testcase--) solve();
    return 0;
}

/*
1 2 3 4 5
12 13 14 15 16 17
24 25 26 27 28 29
36 37 38 39 40 41
48 49 50 51 52 53
60 61 62 63 64 65
72 73 74 75 76 77
84 85 86 87 88 89
96 97 98 99 100 101



1 2 3 4 5 6
21 22 23 24 25 26 27
42 43 44 45 46 47 48
63 64 65 66 67 68 69
84 85 86 87 88 89 90
105 106 107 108 109 110
*/