/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define ll long long
#define vll vector <long long>
#define all(x) (x).begin(), (x).end()
#define pll pair <long long, long long>
#define vvll vector <vector <long long>>
#define vpll vector <pair <long long, long long>>
#define pb push_back
#define ff first
#define ss second
#define sp ' '
#define endl '\n'
#define nl cout << '\n'
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define nn '\n'
const ll mod = 1e9 + 7;
//     The greatest success comes from the freedom to fail
//                                                        ~ Mark Zuckerberg
/*

*/

int ans=0;
vector<string> allStrings;
void generation(vector<char> v, int k, int idx, string s){
	if(k==0){
		allStrings.push_back(s);
		return;
	}
	if(idx>=v.size()) return;
	generation(v,k-1,idx+1,s+v[idx]);
	generation(v,k,idx+1,s);
}
void generateAll(string s,int k){
	set<char> st;
	for (int i = 0; i < s.size(); ++i)
	{
		st.insert(s[i]);
	}
	if(k>=st.size()){
		string str="";
		for(auto it : st)
		{
			str+=it;
		}
		allStrings.pb(str);
		return ;
	}
	vector<char> v;
	for(auto it : st)
	{
		v.pb(it);
	}
	generation(v,k,0,"");
}
#define TESTCASE
void solve()
{
	ans=0;
	allStrings.clear();
	int n,k; cin>>n>>k;
	string a,b; cin>>a>>b;
	generateAll(a,k);
	for(auto str : allStrings)
	{
		int cur_ans=0;
		set<char> st;
		for(auto c : str)
		{
			st.insert(c);
		}
		int cur=0;
		for (int i = 0; i < n; ++i)
		{
			if(st.count(a[i])) cur++;
			else if(a[i]==b[i]){
				cur++;
			}
			else{
				cur_ans+=(cur*(cur+1))/2;
				cur=0;
			}
		}
		cur_ans+=(cur*(cur+1))/2;
		ans=max(cur_ans,ans);
	}
	cout<<ans<<nn;
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