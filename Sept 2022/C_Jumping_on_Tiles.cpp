#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <long long int>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'

bool compare2(const pair<ll, ll>&i, const pair<ll, ll>&j) { 
    return i.first > j.first; 
} 

bool compare1(const pair<ll, ll>&i, const pair<ll, ll>&j) { 
    return i.first < j.first; 
} 

void solve(vector<ll> v, vector<pair<ll,ll>> &pr){
	if(v[0]<=v[v.size()-1]){
		for (int i = 1; i < v.size()-1; ++i)
		{
			if(v[i] >= v[0] && v[i] <= v[v.size()-1]){
				pr.push_back(make_pair(v[i],i+1));
			}
		}
		sort(pr.begin(),pr.end(),compare1);
	}

	else{
		for (int i = 1; i < v.size()-1; ++i)
		{
			if(v[i] <= v[0] && v[i] >= v[v.size()-1]){
				pr.push_back(make_pair(v[i],i+1));
			}
		}
		sort(pr.begin(),pr.end(),compare2);
	}
}

int main(){
    ll t;
    cin >> t;
    vector<char> v(26);
    for (int i = 0; i < 26; ++i)
    {
    	v[i]='a'+i;
    }
    while (t--)
    {
    	vector<pair<ll,ll>> ans;
		string str;
		cin>>str;
		vector<ll> v(str.size());
		for (int i = 0; i < str.size(); ++i)
		{
			v[i]=str[i]-'a'+1;
		}
		solve(v,ans);
		cout<<abs(v[0]-v[v.size()-1])<<sp<<ans.size()+2<<endl;
		cout<<1<<sp;
		for (int i = 0; i < ans.size(); ++i)
		{
			cout<<ans[i].second<<sp;
		}
		cout<<str.size()<<endl;
    }
    return 0;
}