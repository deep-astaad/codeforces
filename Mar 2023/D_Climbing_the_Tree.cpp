/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE

int find(int a, int b, int h){
	if(h<0) return -1;
	if(h==0) return 0;
	int l=1,r=(h/(a-b))+1;
	int ans=-1;
	while(l<=r){
		int mid=l+(r-l)/2;
		if(((mid-1)*(a-b))+a>=h){
			ans=mid;
			r=mid-1;
		}	
		else l=mid+1;
	}
	return ans;
}

void solve()
{
	int n; cin>>n;
	int l=-1,r=-1;
	while(n--){
		int x; cin>>x;
		if(x==1){
			int a,b,n; cin>>a>>b>>n;
			if(l==-1 && r==-1){
				cout<<1<<' ';
				r=(a-b)*(n-1)+a;
				l=r-(a-b-1);
				if(n==1) l=1;
			}
			else{
				int tr=(a-b)*(n-1)+a;
				int tl=tr-(a-b-1);
				if(n==1) tl=1;
				if(max(tl,l)<=min(tr,r)){
					cout<<1<<' ';
					l=max(l,tl);
					r=min(r,tr);
				}
				else cout<<0<<' ';
			}
		}
		else{
			int a,b; cin>>a>>b;
			int days1=find(a,b,l);
			int days2=find(a,b,r);
			if(days1==days2) cout<<days1<<' ';
			else cout<<-1<<' ';
		}
	}
	cout << '\n';
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