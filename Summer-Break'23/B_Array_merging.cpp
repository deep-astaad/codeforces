/* Aman Deep (deep_aman) */
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
#define nn '\n'
#define sp ' '
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl '\n'

#define TESTCASE
void solve()
{
	int n; cin>>n;
	vll a(n),b(n);

	for (int i = 0; i < n; ++i)
		cin>>a[i];

	for (int i = 0; i < n; ++i)
		cin>>b[i];
    
    map<int,int> mpa, mpb;
    int temp=1;
    for (int i = 1; i < n; ++i)
    {
    	if(a[i]==a[i-1]) temp++;
    	else mpa[a[i-1]]=max(mpa[a[i-1]],temp), temp=1;
    }
	mpa[a[n-1]]=max(mpa[a[n-1]],temp), temp=1;

    for (int i = 1; i < n; ++i)
    {
    	if(b[i]==b[i-1]) temp++;
    	else mpb[b[i-1]]=max(mpb[b[i-1]],temp), temp=1;
    }
	mpb[b[n-1]]=max(mpb[b[n-1]],temp), temp=1;


	int ans=0;
	for(auto it : mpa)
	{
		ans=max(ans, mpa[it.ff]+mpb[it.ff]);
	}
	for(auto it : mpb)
	{
		ans=max(ans, mpa[it.ff]+mpb[it.ff]);
	}
    // for(auto it : mp)
    // {
    // 	cout<<it.ff<<':';
    // 	for(auto x : it.ss)
    // 	{
    // 		cout<<x<<' ';
    // 	}
    // 	nl;
    // }

    // int ans=0;
    // for(auto it : mp)
    // {
    // 	sort(all(it.ss));
    // 	int m=it.ss.size();
    // 	if(it.ss.size()>1) ans=max(ans, it.ss[m-1]+it.ss[m-2]);
    // 	else ans=max(ans, it.ss[0]);
    // }
    cout<<ans<<nn;

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