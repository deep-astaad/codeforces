// Coded by : deep_aman (astaad)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define deb(x); cout << #x << " = " << x << endl;
#define cyes cout<<"YES"<<"\n"
#define cno cout<<"NO"<<"\n"
#define sp " "
#define nn "\n"
#define nl cout<<nn;

const unsigned int M = 1000000007;

void solve()
{
	ll n,x;
	cin>>n>>x;
	if((n%x)!=0){cout<<-1<<nn; return;}
	vll v(n+1);
	for (int i = 0; i < n; ++i)
	{
		v[i]=i;
	}
	v[n]=1;
	v[1]=x;
	if(n!=x){
		v[x]=n;
	}
	
	for (int i = 2; i < n; ++i)
	{
		if(v[i]!=n && v[i]%x==0 && v[x]%i==0){
			swap(v[i],v[x]);
			x=i;
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		cout<<v[i]<<sp;
	}
	nl;
	// if(x==n){
	// 	cout<<x<<sp;
	// 	for (int i = 1; i < n-1; ++i)
	// 	{
	// 		cout<<i+1<<sp;
	// 	}
	// 	cout<<1<<nn;
	// 	return;
	// }

	// vll test(n+1);
	// vll v(n,-1);
	// v[0]=x;
	// test[x]=1;
	// v[n-1]=1;
	// test[1]=1;
	// for (int i = 0; i < x-1; ++i)
	// {
	// 	v[i]=i+1;
	// 	test[i+1]=1;
	// }
	// for (int i = x-1; i < n-1; ++i)
	// {
	// 	for (int j = i+1; j < n-1; ++j)
	// 	{
	// 		if(opt%(j+1)==0 && (j+1)%(x)==0){

	// 		}
	// 	}
	// }
	// v[0]=x;
	// test[x]=1;
	// v[n-1]=1;
	// test[1]=1;
	// ll opt=n;
	// bool flag = false;
	// for (int i = n-2; i >= 1; --i)
	// {
	// 	if(flag){
	// 		v[i]=i+1;
	// 	}
	// 	else if(i+1==x){
	// 		if(opt%x==0){
	// 			v[i]=opt;
	// 			flag=true;
	// 		}
	// 		else{
	// 			cout<<-1<<nn;
	// 			return;
	// 		}
			
	// 	}
	// 	else if(opt>=(i+1)&&opt%(i+1)==0){
	// 		if((i+1)>x&&(i+1)%x==0){
	// 			v[i]=opt;
	// 			test[opt]=1;
	// 			opt=i+1;
	// 		}
	// 		else{
	// 			v[i]=i+1;
	// 			test[i+1]=1;
	// 		}
	// 	}
	// 	else{
	// 		v[i]=i+1;
	// 		test[i+1]=1;
	// 	}
	// }
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<v[i]<<sp;
	// }
	// nl;
}

int main()
{
    ll testcase;
    testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
		solve();
    }
    return 0;
}