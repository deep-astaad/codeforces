/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int binpow(int a, int b, int p){
	int ans = 1;
	a%=p;
	while(b){
		if(b&1) ans*=a;
		ans%=p;
		a*=a;
		a%=p;
		b>>=1;
	}
	return ans;
}



void solve()
{
	int p=31, q=5, g=5;
	int i = 1, si = 40;
	si%=q;
	vector<int> commitments = {25,25};

	// i is share of ith party
	int gsi = binpow(g, si, p);

	int v = 1;
	for (int idx = 0; idx < commitments.size(); ++idx)
	{
		int temp = binpow(i, idx, p-1);
		v *= binpow(commitments[idx], temp, p);
		v%=p;
	}
	// cout<<gsi<<' '<<v<<endl;
	if (gsi == v){
		cout<<"Verified\n";
		// return true;
	}
	else{
		cout<<"Verification Failed\n";
		// return false;
	}
}


int32_t main()
{
	solve();
	return 0;
}