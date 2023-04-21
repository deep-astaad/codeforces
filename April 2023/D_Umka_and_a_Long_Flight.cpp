/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

vector<int> fib;
int n,x,y;

bool fun(int row_min, int row_max, int col_min, int col_max){
	int idx=n;
	while(idx>=2){
		if(x+fib[idx]<=row_max)	row_max-=fib[idx];
		else if(x-fib[idx]>=row_min) row_min+=fib[idx];
		else if(y+fib[idx]<=col_max) col_max-=fib[idx];
		else if(y-fib[idx]>=col_min) col_min+=fib[idx];
		else break;
		idx--;
	}
	if(idx<2) return true;
	else return false;
}

#define TESTCASE
void solve()
{
	cin>>n>>x>>y;
	fib.resize(0);
	for (int i = 0; i <= n; ++i)
	{
		if(i==0 || i==1) fib.push_back(1);
		else fib.push_back(fib.back()+fib[fib.size()-2]);
	}

	int row_min=1, col_min=1, row_max=fib[n], col_max=fib[n]+fib[n-1];

	if(fun(row_min,row_max,col_min,col_max)) cout<<"Yes\n";
	else cout<<"No\n";
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