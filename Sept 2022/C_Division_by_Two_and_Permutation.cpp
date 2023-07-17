#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector <long long>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'


int main()
{
    
    ll t;
    t=1;
    cin >> t;
    while (t--)
    {
		ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        unordered_set<ll> st;
        sort(v.begin(),v.end());
        for(ll i=n-1;i>=0;i--){
            while(v[i]>n && v[i]>0) {
                v[i] /= 2;
            }
            while(st.find(v[i]) != st.end() && v[i]>0){
                v[i] /= 2;
            }
            if(v[i]!=0) {st.insert(v[i]);}
        }
        if(st.size()==n) cyes;
        else cno;
    }
    return 0;
}
