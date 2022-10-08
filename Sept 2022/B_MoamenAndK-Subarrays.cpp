#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector <long long>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'

ll fun(vll &v,ll target){
	ll l=0,h=v.size()-1;
	while(l<=h) {
	    ll mid = l+(h-l)/2;
	    if(target == v[mid]) return mid;
	    else if(target < v[mid]) h=mid-1;
	    else l=mid+1;
	}
	return -1;
}

int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
		 ll n,k;
		 cin>>n>>k;
		 vll v(n);
		 for (int i = 0; i < n; ++i)
		 {
		 	cin>>v[i];
		 }
		 vll s(n);
		 for (ll i = 0; i < n; ++i)
		 {
		 	s[i]=v[i];
		 }
		 sort(s.begin(),s.end());
		 ll ans=0;
		 for (ll i = 0; i < n; ++i)
		 {
		 	ll idx = fun(s,v[i]);
		 	while(idx!=n-1 && i!=n-1 && s[idx+1] == v[i+1]){
		 		idx++;
		 		i++;
		 	}
		 	ans++;
		 }
		 if(ans<=k) cyes;
		 else cno;
    }
    return 0;
}