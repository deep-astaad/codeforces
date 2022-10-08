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

void solve(){
        ll n,k;
        vll v(26,0);
        cin>>n>>k;
        string s;
        cin>>s;
        string ans="";
        for (ll i = 0; i < n; ++i)
        {
            v[s[i]-'a']++;
        }
        ll x = n/k;
        ll p=k;
        while(p--){
            ll f=0;
            for (int i = 0; i < 26 && i<x; ++i)
            {
                if (v[i]==0 && f==0)
                {
                    f=1;
                    ans+='a'+i;
                }
                else if(v[i]>0){
                    v[i]--;
                }
            }
            if(f==0){
                ans+='a'+x;
            }
        }
        cout<<ans<<nn;
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