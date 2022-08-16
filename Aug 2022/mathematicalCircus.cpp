#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        if (k%4 == 0)
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
	        for (ll i = 1; i <= n; i += 2)
	        {
	            if(((i + k) * (i + 1)) % 4 == 0)
	            {
	                cout<<i<<" "<<i+1<<endl;
	            }
	            else
	            {
	                cout<<i+1<<" "<<i<< endl;
	            }
	        }
    	}
    }
    return 0;
}