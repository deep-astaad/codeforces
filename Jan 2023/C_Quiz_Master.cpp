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


*/
void solve()
{
	ll n,m; cin>>n>>m;
	vll v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	sort(all(v));
	vvll fact;
	for (int i = 0; i < n; ++i)
	{
		vll tt;
		for (int j = 1; j*j <= v[i]; ++j)
		{
			if(v[i]%j==0 && j<=m){
				tt.push_back(j);
				if ((v[i]/j != j) && (v[i]/j)<=m)
				{
					tt.push_back(v[i]/j);
				}
			}
		}
		fact.push_back(tt);
	}

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<v[i]<<": ";
	// 	for (int j = 0; j < fact[i].size(); ++j)
	// 	{
	// 		cout<<fact[i][j]<<sp;
	// 	}
	// 	nl;
	// }
	// nl;
	unordered_set<ll> st;
	vll cnt(m+1,0);
	ll i=0,j=0;
	for (int k = 0; k < fact[0].size(); k++)
    {
        cnt[fact[0][k]]++;
        st.insert(fact[0][k]);
    }
	ll ans=LLONG_MAX;
	while(i<n && j<n){
		if (st.size() < m)
        {
        	j++;
            for (int k = 0; k < fact[j].size() && j<n; k++)
            {
                cnt[fact[j][k]]++;
                st.insert(fact[j][k]);
            }
        }
        while(st.size()==m){
        	ans=min(ans,v[j]-v[i]);
        	for (int k = 0; k < fact[i].size(); ++k)
        	{
        		cnt[fact[i][k]]--;
        		if(cnt[fact[i][k]]==0){
        			st.erase(st.find(fact[i][k]));
        		}
        	}
        	i++;
        }
        if(st.size()==m && j<n){
        	ans=min(ans,v[j]-v[i]);
        	j++;
        }
	}
	if(ans==LLONG_MAX){
		cout<<-1<<nn;
		return;
	}
	cout<<ans<<nn;
	// nl;
	// if(st.size()==m){
	// 	ans=min(ans,v[j]-v[i]);
	// }
	// cout<<"ans = "<<ans<<nn;
	// nl;
	// for (int i = n-1; i >= 0; --i)
	// {
	// 	for(int j=0;j<fact[i].size();j++){
	// 		st.insert(fact[i][j]);
	// 	}
	// 	if(st.size()==m){
	// 		cout<<*st.rbegin()-*st.begin()<<nn;
	// 		nl;
	// 		return;
	// 	}
	// }
	// for(auto it:st){
	// 	cout<<it<<sp;
	// }
	// nl;
	// cout<<-1<<nn;
	// nl;

	// vll ans;
	// for (int i = m; i > 0; --i)
	// {
	// 	ll fnd=i;
	// 	bool flag=false;
	// 	ll l=0,h=ans.size()-1;
	// 	ll mid;
	// 	if(ans.size()>0 && ans[h]>=fnd){
	// 		while(l<=h && ans[ans.size()-1]>=fnd){
	// 			mid=l+(h-l)/2;
	// 			if(ans[mid]==fnd){
	// 				flag=true;
	// 				break;
	// 			}
	// 			else if(ans[mid]<fnd) l=mid+1;
	// 			else h=mid-1;
	// 			if(l>h){
	// 				fnd+=i;
	// 				h=ans.size()-1;
	// 			}
	// 		}
	// 	}
	// 	if(flag) continue;
	// 	flag=false;
	// 	fnd=i;
	// 	l=0,h=n-1;
	// 	while(l<=h && fnd<=v[n-1]){
	// 		mid=l+(h-l)/2;
	// 		if(v[mid]==fnd){
	// 			reverse(all(ans));
	// 			ans.push_back(fnd);
	// 			reverse(all(ans));
	// 			flag=true;
	// 			break;
	// 		}
	// 		else if(v[mid]<fnd){
	// 			l=mid+1;
	// 		}
	// 		else{
	// 			h=mid-1;
	// 		}
	// 		if(l>h){
	// 			fnd+=i;
	// 			h=n-1;
	// 		}
	// 		if(fnd>v[n-1]){
	// 			cout<<-1<<nn;
	// 			return;
	// 		}
	// 	}
	// 	if(flag) continue;
	// 	else{
	// 		cout<<-1<<nn;
	// 		return;
	// 	}
	// }
	// sort(all(ans));
	// cout<<ans[ans.size()-1]-ans[0]<<nn;
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

/*
		ll fnd=i;
		auto it=ans.begin();
		while(it!=ans.end()){
			if(it.find(fnd))
		}
		if(fnd>v[n-1]){
			cout<<-1<<nn;
			return;
		}
		ll l=0,h=n-1;
		ll mid;
		while(l<=h){
			if(fnd>v[n-1]){
				cout<<-1<<nn;
				return;
			}
			mid=l+(h-l)/2;
			if(v[mid]==fnd){
				st.insert(fnd);
				break;
			}
			else if(v[mid]<fnd) l=mid+1;
			else h=mid-1;
			if(l>h){
				fnd+=fnd;
				h=n-1;
			} 
		}
*/