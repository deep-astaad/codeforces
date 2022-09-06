#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll count=0;
        // for (int i = 1; i <= n; ++i)
        // {
        // 	ll temp = n/i;
        // 	ll ans = 0;
        // 	if(temp < 3) {
        // 		ans = temp;
        // 	}
        // 	else{
        // 		ans = 3;
        // 	}
        // 	count+=ans;
        // }
        // cout<<2*(count)-n<<endl;
        cout<<(n)+2*(n/2)+2*(n/3)<<endl;
    }
    return 0;
}

