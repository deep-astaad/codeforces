/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int


void solve()
{
    vector<int> dp(8, 1e9);
    dp[0]=0;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int c;
        string s;
        cin >> c >> s;
        int x = 0;
        for(int j = 0; j < s.size(); j++){
    		if(s[j]=='A') x+=4;
    		else if(s[j]=='B') x+=2;
    		else x+=1;
        }
        for(int j = 0; j < 8; j++){
            dp[j | x] = min(dp[j | x], dp[j] + c);
        }
    }
    if(dp[7] == 1e9){
            dp[7] = -1;
    }
    cout << dp[7] << "\n";
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