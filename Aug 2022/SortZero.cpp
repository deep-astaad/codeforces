#include <bits/stdc++.h>
using namespace std;
#define ll long long
// #define vector <long long> vll
// #define cyes cout<<"YES"<<endl;
// #define cno cout<<"NO"<<endl;
// #define sp " "

void del(vector<ll> v, ll tar){
	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i] == tar)
		{
			v[i] = 0;
		}
	}
	return;
}

ll solve(vector<ll> v, ll i,ll count){
	if(i == v.size()-1){
		return count;
	}
	if(v[i] > v[i+1]){
		count++;
		del(v,v[i]);
		solve(v,0,count);
	}
	// i++;
	return solve(v,++i,count);
}

int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        std::vector<ll> v(n);
        for (int i = 0; i < n; ++i)
        {
        	cin>>v[i];
        }
        ll count=0;
        
        cout<<solve(v,0,count)<<endl;
    }
    return 0;
}

