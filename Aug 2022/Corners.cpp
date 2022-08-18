#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<string> v(n);
        ll count=0;
        for (int i = 0; i < n; ++i)
        {
        	cin>>v[i];
        }
        for (int i = 0; i < n; ++i)
        {
        	for (int j = 0; j < v[i].size(); j++)
        	{
        		if (v[i][j] == '1')
        		{
        			count++;
        		}
        	}
        }
        int flag = 0;
        for (int i = 0; i < n-1; ++i)
        {
        	for (int j = 0; j < v[i].size()-1; j++)
        	{
        		if ((v[i][j] == '0' && v[i][j+1] == '0') || (v[i][j] == '0' && v[i+1][j] == '0') || (v[i][j] == '0' && v[i+1][j+1] == '0'))
        		{
        			flag++;
        			break;
        		}
        	}
        	if (flag != 0)
        	{
        		break;
        	}
        }

        for (int i = 0; i < n-1; i++)
        {
        	for (int j = m-1; j > 0 ; j--)
        	{
        		if ((v[i][j] == '0' && v[i+1][j-1] == '0'))
        		{
        			flag++;
        			break;
        		}
        	}
        	if (flag != 0)
        	{
        		break;
        	}
        }

        for (int i = 0; i < m-1; ++i)
        {
        	if (v[n-1][i] == '0' && v[n-1][i+1] == '0')
        	{
        		flag++;
        	}
        }
        for (int i = 0; i < n-1; ++i)
        {
        	if (v[i][m-1]=='0' && v[i+1][m-1] == '0')
        	{
        		flag++;
        	}
        }

        if (count == n*m)
        {
        	cout<<count-2<<endl;
        }
        else if (flag > 0)
        {
        	cout<<count<<endl;
        }
        else{
        	cout<<count-1<<endl;
        }
    }
    return 0;
}

