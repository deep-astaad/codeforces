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

void solve()
{
    ll n,k; cin>>n>>k;
    vll v(k);
    for (int i = 0; i < k; ++i)
    {
        cin>>v[i];
    }

    ll mn=INT_MAX;
    ll flag=0;
    for (int i = k-1; i > 0; --i)
    {
        ll x = v[i]-v[i-1];
        if (mn < x)
        {
            cno;
            flag=1;
            break;
        }
        else{
            mn = x;
        }
    }
    // cout<<mn<<nn;
    if(flag==0){
        if(n==k){
            if(v[0]>mn){
                cno;
            }
            else{
                cyes;
            }
        }
        else{
            ll test = v[0]/(n-k+1);

            if (v[0]>=0 && v[0]%(n-k+1))
            {
                test++;
            }
            // cout<<test<<nn;
            if(test>mn){
                cno;
            }
            else{
                cyes;
            }
        }
    }
    
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