// Author : deep_aman (astaad)
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

const unsigned int M = 1000000007;

string findseq(string s, string s1){
	// cout<<"Needed: "<<s1<<nn;
	string ans=""; // ans="101"
	ll scr=0;
	ll n=s.size();
	ll m= s1.size();
	for (int i = 0; i < n; ++i)
	{
		// cout<<i<<nn;
		string temp="";
		ll tmpscr=0;
		ll idx=0;

		while(idx+i<n && idx<m){
			if(s1[idx]=='1' && s[idx+i]=='1'){
				temp+='1';
				// tmpscr+=m-idx;
			}
			else{
				temp+='0';
			}
			idx++;
		}


		ll sz = temp.size();
		for (int j = sz-1; j >= 0; --j)
		{
			if(temp[j]=='1'){
				tmpscr+=sz-j+1;
			}
		}
		// cout<<temp<<sp<<tmpscr<<nn;
		if(tmpscr>scr){
			ans=temp;
			scr=tmpscr;
		}
		if(ans == s1){
			break;
		}
	}
	
	if(ans.size()==0){
		ans+='0';
	}
	// cout<<"Returned: "<<ans<<nn;
	return ans;
}

void solve()
{
	ll n; cin>>n;
	string s; cin>>s;
	string s1="";
	bool flag = false;
	for (int i = 0; i < n; ++i)
	{
		if(flag){
			if(s[i]=='0'){
				s1+='1';
			}
			else{
				s1+='0';
			}
			// s1+=s[i];
		}
		if(!flag && s[i]=='0'){
			s1+='1';
			flag = true;
		}
	}
	string seq = findseq(s,s1);
	// cout<<seq<<nn;
	string ans="";
	ll app = s.size()-seq.size();
	for (int i = 0; i < app; ++i)
	{
		ans+='0';
	}
	ans+=seq;
	// cout<<s<<nn<<ans<<endl;
	string res="";
	flag=false;
	for (int i = 0; i < n; ++i)
	{
		if(flag){
			if(s[i]=='1' || ans[i]=='1'){ //(i < ans.size() && 
				// cyes;
				res+='1';
			}
			else{
				// cyes;
				res+='0';
			}
		}
		else if(s[i]=='1' || ans[i]=='1'){
				res+='1';
				flag=true;
		}
	}
	if(res.size()==0){
		res+='0';
	}
	cout<<res<<nn;
}

int main()
{
    ll testcase;
    testcase = 1;
    // cin >> testcase;
    while (testcase--)
    {
		solve();
    }
    return 0;
}