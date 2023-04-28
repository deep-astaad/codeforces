/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define ll long long
#define vll vector <long long>
#define all(x) (x).begin(), (x).end()
#define pll pair <long long, long long>
#define vvll vector <vector <long long>>
#define vpll vector <pair <long long, long long>>
#define pb push_back
#define ff first
#define ss second
#define sp ' '
#define endl '\n'
#define nl cout << '\n'
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define nn '\n'
const ll mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

#define TESTCASE
void solve()
{
    int n; cin>>n;
    vll v(n+1);
    for (int i = 1; i <= n; ++i) cin>>v[i];
    vll pre(n+1,1);

    for(int i = n; i > 1; --i)
    {

        if(v[1] < v[i]) 
            pre[1] = max(1 + pre[i], pre[1]);

        for (int j = 2; j*j <= i; ++j)
        {
            if(i%j==0){
                int x1=i/j;
                if(v[x1]<v[i])
                    pre[x1] = max(pre[x1],1+pre[i]);

                int x2 = j;
                if(v[x2] < v[i])
                    pre[x2] = max(pre[x2], 1 + pre[i]);
                
            }

        }

    }

    int ans = *max_element(all(pre));
    cout << ans;

    nl;

}

int32_t main()
{
    deep_aman;
    int testcase = 1;
    #ifdef TESTCASE
        cin >> testcase;
    #endif
    while (testcase--) solve();
    return 0;
}