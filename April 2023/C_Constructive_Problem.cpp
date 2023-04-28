/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

#define TESTCASE
void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    map<int, vector<int>> mp;
    for (int i = 0; i < n; ++i)
    {
        cin>>v[i];
        mp[v[i]].push_back(i);
    }

    if(n==1){
        if(v[0]==0) cout<<"NO\n";
        else cout<<"YES\n";
        return;
    }

    int mex=0;
    while(true){
        if(mp.find(mex)!=mp.end()){
            mex++;
        }
        else break;
    }

    int l=-1,h=-1;
    if(mp.find(mex+1)!=mp.end()){
        if(mp[mex+1].size()>1){
            l=mp[mex+1][0];
            h=mp[mex+1][mp[mex+1].size()-1];
        }
        else l=mp[mex+1][0];
    }

    if(h!=-1){
        for (int i = l; i <= h; ++i)
        {
            v[i]=mex;
        }
    }
    else if(l!=-1) v[l]=mex;
    else{
        for(auto &it : mp)
        {
            if(it.first<=mex){
                if(it.second.size()>1){
                    v[it.second[0]]=mex;
                    break;
                }
            }
            else{
                v[it.second[0]]=mex;
                break;
            }
        }
    }
    
    mp.clear();
    for (int i = 0; i < n; ++i) mp[v[i]].push_back(i);

    int nmex=0;
    while(true){
        if(mp.find(nmex)!=mp.end()) nmex++;
        else break;
    }

    if(nmex==mex+1) cout<<"YES\n";
    else cout<<"NO\n";


}

int32_t main()
{
    deep_aman;
    int testcase = 1;
    #ifdef TESTCASE
        cin >> testcase;
    #endif
    while (testcase--) solve();
    return 0;
}