/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

vector<int> fq(1e6+1);

#define TESTCASE
void solve()
{
	int n; cin>>n;
	vector<int> v(n);

	for (int i = 0; i < n; ++i)
		cin>>v[i];
	sort(v.begin(), v.end());

	for (int i = 0; i < n; ++i)
		fq[v[i]]++;

 	int ans=0;
 	for (int i = 0; i < n; i++)
 	{
 		int ai=v[i];
 		for (int b = 2; b <= 1000; ++b)
 		{
 			int aj=ai*b, ak=aj*b;
 			if(ak<=1e6)
 				ans+=fq[aj]*fq[ak];
 		}
 		if(fq[v[i]]>=3) ans+=(fq[v[i]]-1)*(fq[v[i]]-2);

 		if(i-1>=0 && v[i]>v[i-1]) fq[v[i-1]]=0;
 	}

 	fq[v[n-1]]=0;

	cout<<ans<<'\n';
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