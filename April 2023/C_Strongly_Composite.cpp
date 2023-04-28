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

vector<int> seive(1e7+1);

void init(){
	int n=seive.size();
	seive[1]=1;

	for (int i = 2; i < n; ++i)
		seive[i]=i;

	for (int i = 4; i < n; i+=2)
		seive[i]=2;

	for (int i = 3; i*i < n; i+=2)
		if(seive[i]==i)
			for (int j = i*i; j < n; j+=i)
				if(seive[j]==j) seive[j]=i;
}


map<int, int> mp;
#define TESTCASE
void solve()
{
	mp.clear();
	int n; cin>>n;
	vll v(n);
	for (int i = 0; i < n; ++i)
		cin>>v[i];

	for (int i = 0; i < n; ++i)
	{
		int t=v[i];
		while(t>1){
			int div = seive[t];
			while(t%div==0){
				mp[div]++;
				t/=div;
			}
		}
	}

	int cnt=0, buffer=0;
	for(auto it : mp)
	{
		cnt+=(it.ss/2);	
		buffer+=it.ss%2;
	}
	cout<<cnt+(buffer/3)<<endl;
}

int32_t main()
{
	deep_aman;
	init();
	int testcase = 1;
	#ifdef TESTCASE
		cin >> testcase;
	#endif
	while (testcase--) solve();
	return 0;
}