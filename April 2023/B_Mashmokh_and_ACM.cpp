/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
const int mod = 1e9 + 7;

vector<vector<int>> divisors(2001);
void init(){
    int n = 2001;
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j*j <= i; ++j) {
            if(i%j==0){
                if(j != i/j){
                    divisors[i].push_back(j);
                    divisors[i].push_back(i/j);
                }
                else divisors[i].push_back(j);
            }
        }
    }
}

void solve()
{
    int n,k; cin>>n>>k;

    vector<vector<int>> dp(n+1, vector<int> (k+1));

    for (int i = 1; i <= n; ++i)
        dp[i][k]=1;

    for (int i = k; i > 0; --i) {
        for (int j = 1; j <= n; ++j) {
            for(auto it : divisors[j]){
                dp[it][i-1]+=dp[j][i];
                dp[it][i-1]%=mod;
            }
        }
    }

    int ans=0;
    for (int i = 0; i <= n; ++i)
    {
       ans+=dp[i][1];
       ans%=mod;
    }
    cout<<ans<<'\n';
}

int32_t main()
{
    init();
    deep_aman;
    int testcase = 1;
    #ifdef TESTCASE
        cin >> testcase;
    #endif
    while (testcase--) solve();
    return 0;
}