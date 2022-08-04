#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        if (n%7 == 0)
        {
            cout<<n<<endl;
        }
        else{
            long long ans = n;
            int last = n%10;
            if(last + (7-n%7) >9){
                cout<<ans-n%7<<endl;
            }
            else{
                cout<<ans + (7 - n%7)<<endl;
            }
            // cout<<ans<<endl;
        }
    }
    return 0;
}
