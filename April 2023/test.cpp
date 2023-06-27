/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define ll long long
#define vll vector <long long>
#define all(x) (x).begin(), (x).end()
#define vvll vector<vector<long long>>
#define pll pair<long long, long long>
#define vpll vector<pair<long long, long long>>
#define pb push_back
#define ff first
#define ss second
#define nl cout << '\n'
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl '\n'
const int mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

// #define TESTCASE

bool check(vvll &v, vll &freq, int idx){
    for (int i = 0; i < 10; ++i)
    {
        if(v[idx][i]<freq[i]) return false;
    }
    return true;
}

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    int m; cin>>m;
    vector<string> arr(m);
    for (int i = 0; i < m; ++i)
        cin>>arr[i];

    vector<vector<int>> v(n, vector<int> (10));

    for (int i = 0; i < n; ++i){
        if(i==0) v[i][s[i]-'0']++;
        else{
            v[i]=v[i-1];
            v[i][s[i]-'0']++;
        }
    }

    vector<int> sol(m);
    for (int i = 0; i < m; ++i){
        vector<int> freq(10);
        for (int j = 0; j < arr[i].size(); ++j)
            freq[arr[i][j]-'0']++;

        int l=0, h=n-1, ans=-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(check(v, freq, mid)){
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        sol[i]=ans;
        if(ans>=0) sol[i]++;
    }
    for(auto it : sol)
        cout<<it<<' ';
    cout<<endl;
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