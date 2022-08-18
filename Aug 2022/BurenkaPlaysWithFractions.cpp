#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x = a*d,y = c*b;
        ll mn = min(x,y);
        ll mx = max(x,y);
        if (a == 0 && c==0)
        {
        	cout<<0<<endl;
        }
        else if (a==0 || c==0)
        {
        	cout<<1<<endl;
        }
        else if (mx == mn)
        {
        	cout<<0<<endl;
        }
        else if (mx%mn == 0)
        {
        	cout<<1<<endl;
        }
        else{
        	cout<<2<<endl;
        }
        // if (x % y == 0 && x/y == 1)
        // {
        // 	cout<<0<<endl;
        // }
        // if (a == c && b == d)
        // {
        // 	cout<<1<<endl;
        // }

    }
    return 0;
}

