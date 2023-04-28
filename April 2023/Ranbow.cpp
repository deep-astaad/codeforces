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

	int ans=0;
	int l=1, h=1e8;

	while(l<=h){
		int mid=l+(h-l)/2;
		if( 13LL*mid*(mid+1)<(n)){
			ans=mid;
			l=mid+1;
		}
		else{
			h=mid-1;
		}
	}


	if(ans*(ans+1)*13==n){ 
		cout<<'Z'<<nn;
	}

	int t=n-13LL*(ans*(ans+1));
	int pos=t/(ans+1);
	if(t%(ans+1)) pos++;
	cout<<(char)('A'+pos-1)<<nn;

}

int32_t main()
{
	deep_aman;
    int testcase = 1, i = 1;
    #ifdef TESTCASE
        cin >> testcase;
    #endif
    while (testcase--){ 
        cout << "Case #" << i << ": ";
        solve();
        ++i;
    }
    return 0;
}