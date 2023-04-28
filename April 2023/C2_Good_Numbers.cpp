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

#define TESTCASE

vector<int> pre(39);

void init(){
	pre[0] = 1;
	for (int i = 1; i < 39; ++i)
		pre[i] = 3LL * pre[i-1];
}

void solve()
{
	int n; cin>>n;
	int t=n;

	vector<int> v(39, 0);
	for(int i = 38; i >= 0; --i){
		if(n>=pre[i]){
			v[i]=1;
			n-=pre[i];
		}
	}

	if(n==0){
		cout<<t<<nn;
		return;
	}

	int idx = 0;
	for (int i = 0; i < 39; ++i)
	{
		if(v[i]==0){
			idx=i;
			break;
		}
	}

	v[idx]=1;
	for(int i = idx-1; i >= 0; --i) v[i]=0;


	int ans=0;
	for (int i = 0; i < 39; ++i)
		if(v[i]) ans+=pre[i];

	cout<<ans<<nn;
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