// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define cyes cout<<"YES"<<"\n"
#define cno cout<<"NO"<<"\n"
#define c(x) cout<<x<<"\n"
#define sp " "
#define nn "\n"
#define nl cout<<nn;
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
//-------------------------------------------------------------------------------//
const ll M = 1e9+7;
/*
1  9  4  6  5  8 
10 9  5  8  11 6 
24 42 32 8  11 1 
23 1  9  69 13 3 
13 22 60 12 14 17 

prefix sum
0 1 2  3  4  5 
1 3 5  7  9  11 
2 5 8  11 14 16 
3 6 10 14 18 21 
4 8 13 18 23 27
*/
// 2D Prefix

bool func(vvll v, ll mid){
	ll n=v.size();
	ll m=v[0].size();
	vvll vec(n,vll (m));
	// Generation of 2D Prefix Sum matrix in 0 or 1
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(i==0 && j==0){
				vec[i][j] = (v[i][j]>=mid ? 1:0);
			}
			else if(i==0){
				vec[i][j] = (v[i][j]>=mid ? 1:0) + vec[i][j-1];
			}
			else if(j==0){
				vec[i][j] = (v[i][j]>=mid ? 1:0) + vec[i-1][j];
			}
			else{
				vec[i][j] = (v[i][j]>=mid ? 1:0) + vec[i-1][j] + vec[i][j-1] - vec[i-1][j-1];
			}
		}
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 0; j < m; ++j)
	// 	{
	// 		cout<<vec[i][j]<<sp;
	// 	}
	// 	nl;
	// }

	// calculate sum for block i,j with mid x mid subarray
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(i<mid-1 || j<mid-1){
				continue;
			}
			ll cnt=0;
			cnt=vec[i][j];
			if(j-mid>=0) cnt-=vec[i][j-mid];
			if(i-mid>=0) cnt-=vec[i-mid][j];
			if(i-mid>=0 && j-mid>=0) cnt+=vec[i - mid][j - mid];
			// if subarray contains all the buidings with height more than mid, mid can be the answer
			if(cnt==mid*mid) return true;
		}
	}
	return false;
}
void solve()
{
	ll n,m;
	cin>>n>>m;
	vvll v(n,vll (m,0));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>v[i][j];
			// cout<<v[i][j]<<sp;
		}
	}
	// nl;
	ll low=1,high=min(n,m);
	ll ans=-1;
	// Binary Search for ans between 1 to min(n,m)
	while(low<=high){
		ll mid=low + (high-low)/2;
		if(func(v,mid)){
			ans=mid;
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	cout<<ans<<nn;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    ll testcase;
    testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
		solve();
    }
    return 0;
}