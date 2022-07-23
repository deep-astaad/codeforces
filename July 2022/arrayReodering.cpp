#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>v[i];
        }
        int i = 0,j=n-1;
        while(i<j){
            if (v[i] % 2 == 1 )
            {
                if (v[j] % 2 == 0)
                {
                    int temp = v[i];
                    v[i] = v[j];
                    v[j] = temp;
                }
                else{
                    j--;
                }
            }
            else if(v[j] % 2 == 0){
                if (v[i] % 2 == 1)
                {
                    int temp = v[i];
                    v[i] = v[j];
                    v[j] = temp;
                    
                }
                else{
                    i++;
                }
            }
            else{
                i++;
                j--;
            }
        }
        int count=0;
        for (int i = 0; i < n-1; ++i)
        {
            for(int j=i+1; j<n; j++){
                if (__gcd(v[i],2*v[j]) > 1)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
