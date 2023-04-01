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
vector<int> v;
// #define TESTCASE

void brute(string s, int n, int score){
	if(n<0){
		v.pb(score);
		return;
	}
	if(s[n]=='+'){
		brute(s,n-1,score+1);
	}
	else if(s[n]=='-'){
		brute(s,n-1,score-1);
	}
	else{
		brute(s,n-1,score+1);
		brute(s,n-1,score-1);
	}

}
void solve()
{
	string a,b; cin>>a>>b;
	int score=0;
	for(auto ch : a)
	{
		if(ch=='+') score++;
		else score--;
	}
	brute(b,b.size()-1,0);
	sort(all(v));
	long double prob = ((long double)count(all(v),score))/v.size();
	cout<<setprecision(9)<<prob;
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