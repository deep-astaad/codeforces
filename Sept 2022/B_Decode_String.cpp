#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <long long>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'

ll fun(char c){
	return c-'0';
}

int main()
{
    
    ll t;
    cin >> t;
    vector<char> v(26);
    for (int i = 0; i < 26; ++i)
    {
    	v[i]='a'+i;
    	// cout<<i<<":"<<v[i]<<sp;
    }
    while (t--)
    {
    	ll n;
    	cin>>n;
		string str;
		string ans="";
		cin>>str;
		// cout<<str<<nn;
		for (int i = n-1; i >= 0; --i)
		{
			if (str[i]=='0' && i>=2)
			{
				// cyes;
				ll idx=10*fun(str[i-2])+fun(str[i-1])-1;
				// cout<<v[idx];
				i-=2;
				ans+=v[idx];
			}
			else{
				ll idx=fun(str[i])-1;
				// cout<<v[idx];
				ans+=v[idx];
			}
		}
		for (int i = ans.size()-1; i >=0; --i)
		{
			cout<<ans[i];
		}
		cout<<endl;
    }
    return 0;
}